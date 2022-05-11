int Solution::solve(string A) {
    int balance = 0;
    for(int i = 0; i < A.length(); i++){
        if(balance == -1){
            return 0;
        }
        if(A[i] == '('){
            balance ++;
        }
        else{
            balance --;
        }
    }
    if(balance != 0){
        return 0;
    }
    else{
        return 1;
    }

}
