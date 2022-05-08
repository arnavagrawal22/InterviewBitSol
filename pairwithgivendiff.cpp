int Solution::solve(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int i = 0;
    int j = i+1;
    if(B<0){
        B *= -1;
    }
    while(j<A.size()){
        int diff = A[j]-A[i];
        if(diff == B && i!=j){
            return 1;
        }
        if(diff > B){
            i++;
        }
        else {j++;}
    }
    return 0;
}
