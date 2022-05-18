vector<int> Solution::findOccurences(vector<int> &A) {
    sort(A.begin(),A.end());
    vector<int> ans;
    int i =0;
    while(i<A.size()){
        int count = 1;
        int j = i+1;
        while(j<A.size() && A[i]==A[j]){
            count++;
            j++;
        }
        i = i+count;
        ans.push_back(count);        
    }
    return ans;
}
