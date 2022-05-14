vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    deque<int> dq;
    vector<int> ans;
    for(int i = 0 ; i < A.size() ;i ++){
        if(!dq.empty() && dq.front() == i-B){
            dq.pop_front();
        }
        while(!dq.empty() &&  A[i] > A[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
        if(i+1 >= B){
            ans.push_back(A[dq.front()]);
        }

    }
    return ans;


}
