vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int i = 0; 
    int j = 0;
    vector<int> ans;
    while(i<A.size() && j<B.size()){
        if(A[i] == B[j]){
            ans.push_back(A[i]);
            i++;
            j++;
        }
        if(A[i] < B[j]){
            i++;
        }
        if(A[i] > B[j]){
            j++;
        }
    }
    return ans;
}
