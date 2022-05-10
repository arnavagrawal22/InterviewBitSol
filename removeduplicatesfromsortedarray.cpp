int Solution::removeDuplicates(vector<int> &A) {
    if(A.size() == 1){
        return 1;
    }
    int i = 0;
    int j = i+1;
    while(j<A.size()){
        if(A[i] == A[j]){
            j++;
        } 
        else{
            i++;
            A[i] = A[j];
            j++;
        }   
    }
    return i+1;
}
