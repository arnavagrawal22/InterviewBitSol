int Solution::solve(vector<int> &A) {
    if(A.size() == 0){
        return 2*A[0];
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for( int i = 0; i < A.size() ; i++){
        if(A[i]<min){
            min = A[i];
        }
        if(A[i]>max){
            max = A[i];
        }
    }
    return max+min;
}
