int Solution::solve(vector<int> &A) {
    if(A.size()==1){
        return A[0];
    }
    if(A[0]>=A[1]){
        return A[0];
    }
    if(A[A.size()-1]>=A[A.size()-2]){
        return A[A.size()-1];
    }
    for(int i = 1; i < A.size()-1;i++){
        if(A[i]>=A[i-1] && A[i]>=A[i+1]){
            return A[i];
        }
    }
}
