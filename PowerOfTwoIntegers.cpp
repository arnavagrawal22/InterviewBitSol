int Solution::isPower(int A) {
    for(int i = 2; i<32;i++){
        for(int j = 1; j<= sqrt(A); j++){
            if(pow(j,i)==A){
                return 1;
            }
        }
    }
    return 0;
}
