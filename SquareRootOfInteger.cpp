int Solution::sqrt(int A) {
    int lo = 0;
    int hi = A;
    int ans;
    while(lo <= hi){
        long long mid = (lo+hi)/2;
        if(mid*mid <= A){
            ans = mid;
            lo = mid+1;
        }
        else{
            hi = mid -1;
        }
    }
    return ans;
}
