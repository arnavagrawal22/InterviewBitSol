vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    sort(C.begin(),C.end());
    map<int,int> mp;
    vector<int> ans;
    for(int i = 0 ; i < A.size() ; i ++){
        mp[A[i]]++;
        while(A[i] == A[i+1] && i< A.size()){
            i++;
        }
    }
    for(int i = 0 ; i < B.size() ; i ++){
        mp[B[i]]++;
        while(B[i] == B[i+1] && i< B.size()){
            i++;
        }
    }
    for(int i = 0 ; i < C.size() ; i ++){
        mp[C[i]]++;
        while(C[i] == C[i+1] && i< C.size()){
            i++;
        }
    }
    for(auto i : mp){
        if(i.second >= 2){
            ans.push_back(i.first);
        }
    }
    return ans;
}
