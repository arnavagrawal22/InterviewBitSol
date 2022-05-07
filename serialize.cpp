string Solution::serialize(vector<string> &A) {
    string res = "";
    int n = A.size();
    for(int i = 0 ; i < n ; i ++){
        res = res + A[i];
        res = res + to_string(A[i].length()) + "~";
    }
    return res;
}
