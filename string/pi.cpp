vector<int> pifun(string s){
    int n=s.size();
    vector<int> pi(n);
    pi[0]=0;
    int i=1,len=0;
    while(i<n){
        if(s[i]==s[len]){
            len++;
            pi[i]=len;
            i++;
        }
        else{
            if(len!=0) len=pi[len-1];
            else {
                pi[i]=0;
                i++;
            }
        }
    }
    return pi;
}
