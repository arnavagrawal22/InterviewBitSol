string Solution::solve(string A) {
    int swap1 = -1;
    int swap2 = -1;
    for(int i = A.length()-1;i>=0;i--){
        if(A[i]<=A[i-1]){
            continue;
        }
        else{
            swap1 = i-1;
            break;
        }
    }
    if(swap1 == -1){
        return "-1";
    }
    for(int i =swap1+1;i< A.length();i++){
        if(A[i] > A[swap1]){
            swap2 = i;
        }
    }
    swap(A[swap1],A[swap2]);
    reverse(A.begin() + swap1 +1 ,A.end());
    
    return A;
}
