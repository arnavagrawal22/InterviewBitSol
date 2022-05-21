vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int l = 0 ;
    int h = A.size() - 1;
    int left = -1;
    int right = -1;
    vector<int> ans;
    while(l<=h){
        int mid = l + (h-l)/2;
        if(A[mid] == B){
            left = mid;
            h = mid-1;
        }
        else{
            if(A[mid] > B){
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }

    }
    l = 0;
    h = A.size()-1;
    while(l<=h){
        int mid = l + (h-l)/2;
        if(A[mid] == B){
            right = mid;
            l = mid+1;
        }
        else{
            if(A[mid] > B){
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }

    }
    ans.push_back(left);
    ans.push_back(right);
    return ans;
}
