int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int> mp;
    for(int i = 0 ; i < A.size() ; i ++){
        if(A[i]%2 == 0){
            A[i] = 0;
        }
        else{
            A[i] = 1;
        }
    }
    mp[0] = 1;
    int sum = 0;
    int count= 0;
    for(int i = 0 ; i < A.size(); i ++){
        sum = sum+ A[i];        
        int t = sum - B;
        if(mp.find(t)!=mp.end()){
            count += mp[t];
        }
        mp[sum] ++;
    }
    return count;
}
