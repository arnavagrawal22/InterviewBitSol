int Solution::solve(string A) {
    long mod = 1000000007, ans = 0; 
    int isVowel[256] = {0};
    isVowel['a'] = isVowel['e'] = isVowel['i'] = 1;
    isVowel['o'] = isVowel['u'] = 1;
    int N = A.size();
    long cntConsnt[N+1] = {0}, cntVowel[N+1] = {0};
    for(int i=N-1;i>=0;i--){
        if(isVowel[A[i]]){
            cntConsnt[i]=cntConsnt[i+1];
            cntVowel[i] = cntVowel[i+1]+1;
            ans = (ans + cntConsnt[i])%mod;
        }
        else {
            cntConsnt[i]=cntConsnt[i+1]+1;
            cntVowel[i] = cntVowel[i+1];
            ans = (ans + cntVowel[i])%mod;
        }
    }
    return ans;
}
