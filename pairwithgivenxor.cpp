int Solution::solve(vector<int> &A, int B) {
    int result = 0;
    unordered_set<int> s;
    for(int i = 0; i < A.size() ;  i++){
        if(s.find(A[i]^B)!=s.end()){
            int k = A[i]^B;
            cout << A[i] << " " << k << endl ;
            result++;
        }
        s.insert(A[i]);
    }
    return result;
}
