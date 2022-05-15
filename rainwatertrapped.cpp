int Solution::trap(const vector<int> &h) {
    int l  = 0;
    int r = h.size() - 1;
    int lm = 0;
    int rm = 0;
    int res = 0;
    while(l<=r){
        if(h[l]<=h[r]){
            if(h[l] >= lm){
                lm = h[l];
            }
            else{
                res += lm - h[l];
            }
            l++;
        }
        else{
            if(h[r] >= rm){
                rm = h[r];
            }
            else{
                res += rm - h[r];
            }
            r--;
         }
    }
    return res;
}
