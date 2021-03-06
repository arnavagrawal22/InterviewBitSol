vector<int> Solution::flip(string A) {
    int l=A.length(), zero=0, ones=0;
    vector<int> v(l), res;
    
    for(int i=0;i<l;i++)
    {       
        if(A[i]=='1') v[i]=-1;
        else v[i]=1;
    }
    
    int ms=0, me=0, st=INT_MAX, e=INT_MAX, k=0;
    
    for(int i=0; i<l; i++)
    {
        if(me+v[i]<0)
        {
            k=i+1;
            me=0;
        }
        else me+=v[i];
        
        if(me>ms)
        {
            ms=me;
            st=k;
            e=i;
        }
    }
    
    if(st==INT_MAX) return vector<int>();
    
    res.push_back(st+1); res.push_back(e+1);
    
    return res;


}
