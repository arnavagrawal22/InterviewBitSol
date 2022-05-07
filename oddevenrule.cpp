int Solution::solve(vector<int> &A, int B, int C) {
    int fine =0;
    if(B%2==0){
        for(int i=0;i<A.size();i++){
            if(A[i]%2 == 1){
                fine += C;
            }
        }
    }
    else if(B%2==1){
        for(int i=0;i<A.size();i++){
            if(A[i]%2 == 0){
                fine += C;
            }
        }
    }
    return fine;
    
}
