int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int lo = 0;
    int hi = n-1;
    int ans = 0;
    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(A[mid] <= B){
            ans += (mid - lo + 1);
            lo = mid+1;
        }
        if(A[mid] > B){
            hi = mid-1;
        }
    }
    return ans;
}
