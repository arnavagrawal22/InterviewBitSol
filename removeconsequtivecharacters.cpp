string Solution::solve(string A, int B) {
    if(B==1) return "";

    int N = A.size(); 
    string res = "";
    
    for(int i=0; i<N; i++){
        int cnt=1; 
        int j = i+1;
        while(A[j]==A[i]){
            j++; 
            cnt++;
        }
        if(cnt != B){
            while(i < j){
                res += A[i];
                i++;
            }
        }
        i = j-1;
    }
    return res;
}
