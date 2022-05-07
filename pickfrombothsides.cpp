int Solution::solve(vector<int> &A, int B) {
    int max_sum = INT_MIN;
    int cur_sum = 0;
    for(int i = 0 ; i < B ; i++){
        cur_sum += A[i];
    }
    max_sum = max(max_sum,cur_sum);
    for(int i = 0 ; i < B ; i++){
        cur_sum -= A[B-i-1];
        cur_sum += A[A.size() - i - 1];
        max_sum = max(max_sum,cur_sum);
    }
    return max_sum;
}
