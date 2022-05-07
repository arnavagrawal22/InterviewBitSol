vector<int> Solution::solve(string A) {
    vector<int> v(26,0);
    for(int i = 0 ; i < A.length() ; i ++){
        v[A[i] - 97]++;
    }
    return v;
}
