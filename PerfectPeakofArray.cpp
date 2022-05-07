int Solution::perfectPeak(vector<int> &A) {
    int maxi[A.size()];
    int mini[A.size()];
    int n = A.size();
    maxi[1] = A[0];
    mini[n-2] = A[n-1];    
    for(int i = 2 ; i < A.size()-1;i++){
        maxi[i] = max(maxi[i-1],A[i-1]);
    }
    for(int i = A.size()-3 ; i >= 0 ; i--){
        mini[i] = min(mini[i+1],A[i+1]);
    }
    // for(int i = 1 ; i < A.size()-1 ; i++){
    //    cout << maxi[i] << " ";
    // }
    // cout << endl;
    // for(int i = 1 ; i < A.size()-1 ; i++){
    //    cout << mini[i] << " ";
    // }
    for(int i = 1 ; i < A.size()-1 ; i++){
       if(A[i] > maxi [i] && A[i] < mini[i]){
           return 1;
       }
    }
    return 0;


}
