int Solution::solve(vector<int> &A, int B) {
    int count = 0;
    int i =0;
    int j=0;
    int n = A.size();
    int sum = 0;
    while(j<n){        
        sum+=A[j];
        while(sum >=B ){
            sum -= A[i];
            i++;
        }
        count += j-i+1;
        j++;
        
    }
    return count;
}
