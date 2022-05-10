vector<int> Solution::solve(string A) {
    vector<int> ans;
    for(int i = 0 ; i < A.length() ;){
        string a = "";
        int j = i;
        while(j< A.length() && A[j]!=','){
            a += A[j];
            j++;
        }
        ans.push_back(stoi(a));
        i = j+1;
    }
    return ans;
}
