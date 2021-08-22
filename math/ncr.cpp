// all optimised methods disscussed here 
// https://www.geeksforgeeks.org/binomial-coefficient-dp-9/

// without handeling overflows
long long ncr(int n, int r)
{
    long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;
 
    while (r) {
        p *= n--;
        k *= r--;
    }
    if(r<0) return -1;
    return p/k;
}



// for handeling overflows

long long ncr(int n, int r)
{
    long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;
 
    while (r) {
        p *= n;
        k *= r;
        long long m = __gcd(p, k);
        p /= m;
        k /= m;
        n--;
        r--;
    }
    if(r<0) return -1;
    return p;
}

// with dynamic programming 
int ncr(int n, int k)
{
    int C[n + 1][k + 1];
    int i, j;
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= min(i, k); j++) {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
    return C[n][k];
}
