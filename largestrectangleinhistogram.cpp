int Solution::largestRectangleArea(vector<int> &A) {
    int n = A.size();
    vector<int> left(n);
    vector<int> right(n);
    stack<int> temp;
    for(int i = 0 ; i < n ; i ++){
        int idx = 0 ;
        while(!temp.empty() && A[temp.top()] >= A[i]){
            temp.pop();
        }
        if(!temp.empty()){
            idx = temp.top() + 1;
        }
        left[i] = idx;
        temp.push(i);
    }
    while(!temp.empty()){
        temp.pop();
    }
    for(int i = n-1 ; i >= 0   ; i--){
        int idx = n-1;
        while(!temp.empty() && A[temp.top()] >= A[i]){
            temp.pop();
        }
        if(!temp.empty()){
            idx = temp.top() - 1;
        }
        right[i] = idx;
        temp.push(i);
    }
    int maxarea = INT_MIN;
    for(int i = 0 ; i < n ; i ++){
        maxarea = max(maxarea,(right[i] - left[i] + 1)*A[i]);
    }
    return maxarea;
    
}
