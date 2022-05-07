int Solution::reverse(int A) {
    long int reverse = 0;
    int temp = A<0 ? -1*A : A ; 
    while(temp>0){        
        reverse = reverse*10 + temp%10;
        temp /= 10;
        if(reverse < INT_MIN || reverse > INT_MAX){
            return 0;
        }     
    }
    if(A<0){
        reverse = -1*reverse;
    }
    return reverse;
}
