void Solution::sortColors(vector<int> &A) {
    int lo = 0;
    int hi = A.size() -1;
    int mid =0;
    while(mid<=hi){
        if(A[mid] == 0){
            swap(A[lo],A[mid]);
            lo ++;
            mid ++;
        }
        else if(A[mid] == 1){
            mid ++;
        }else{
            swap(A[hi],A[mid]);
            hi--;
        }
    }
}
