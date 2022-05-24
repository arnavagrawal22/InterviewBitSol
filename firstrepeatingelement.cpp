int Solution::solve(vector<int> &A) {
    int n = A.size();
    map<int,int> mymap;
    for(int i = n-1; i>=0 ; i--){
        mymap[A[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(mymap[A[i]] > 1){
            return A[i];
        }
    }
    return -1;
}
