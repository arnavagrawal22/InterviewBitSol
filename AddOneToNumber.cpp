vector<int> Solution::plusOne(vector<int> &A) {
    if(A.size() == 1 && A[0] == 0){
        A.pop_back();
        A.push_back(1);
        return A;
    }
    reverse(A.begin(),A.end());
    while(1){
        if(A[A.size()-1] == 0){
            A.pop_back();
        }
        else{
            break;
        }
    }
    int carry = 1;
    for(int i = 0; i < A.size() ; i ++ ){
        A[i] += carry;
        carry = 0;
        if(A[i] >= 10){
            A[i] -= 10;
            carry = 1;
        }
        if(carry == 0){
            break;
        }
    }
    if(carry == 1){
        A.push_back(1);
    }
    reverse(A.begin(),A.end());
    return A;

}

