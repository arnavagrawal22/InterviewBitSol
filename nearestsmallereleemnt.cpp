vector<int> Solution::prevSmaller(vector<int> &A) {
    int n = A.size();
    stack<int> temp;
    vector<int> ans;
    for(int i = 0 ; i < n ; i ++){
        int x = -1;
        while(!temp.empty() && temp.top()>= A[i]){
            temp.pop();
        }
        if(!temp.empty()){
            x = temp.top();
        }
        ans.push_back(x);
        temp.push(A[i]);
    }
    return ans;
}
