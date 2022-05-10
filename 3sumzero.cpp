vector<vector<int> > Solution::threeSum(vector<int> &A) {
    sort(A.begin(),A.end()); 
    map<long,int>m; 
    for(int i=0;i<A.size();i++){
        m[A[i]]++;
    }
    long sum;
    set<vector<int>>ans;
    for(int i=0;i<A.size();i++){
        for(int j=i+1;j<A.size();j++){
            sum = (long)A[i]+(long)A[j];
            sum=-sum;
            if(sum<A[j]) break;
            if(m.find(sum)!=m.end()){
                if(!A[i]&&!A[j]&&!sum){
                    if(m[sum]>=3) ans.insert({A[i],A[j],sum});
                }
                else if(sum==A[i]||sum==A[j]){
                    if(m[sum]>=2) ans.insert({A[i],A[j],sum});
                }
                else{
                    ans.insert({A[i],A[j],sum});
                }
            }
        }
    }
    vector<vector<int>>res(ans.begin(),ans.end());
    return res;
}