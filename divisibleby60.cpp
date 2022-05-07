int Solution::divisibleBy60(vector<int> &A) {
    int sum = 0;
    bool isZero = false;
    bool isTwo = false;
    if(A[0] ==0 && A.size() == 1){
        return 1;
    }
    for(int i=0;i<A.size();i++){
        sum += A[i];
        if(A[i] == 0){
            isZero = true;
        }
        if(A[i] != 0 && A[i] % 2 == 0 ){
            isTwo = true;
        }
    }
    if(sum%3!=0 || isZero == false || isTwo == false){
        return 0;
    }
    return 1;
}
