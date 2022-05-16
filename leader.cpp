vector<int> Solution::solve(vector<int> &A) {
    vector<int>temp(A.size());
    vector<int> ans;
    int maxi= INT_MIN;
    for(int i = A.size()-1; i >= 0 ; i --){
        maxi = max(maxi,A[i]);
        temp[i] = maxi;
    }
    for(int i = 0; i < A.size() ; i ++){
        if(A[i] == temp[i]){
            ans.push_back(A[i]);
        }
    }
    return ans;

}
