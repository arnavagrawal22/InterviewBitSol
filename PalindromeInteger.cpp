int Solution::isPalindrome(int A) {
    if(A == 0){
        return 1;
    }
    if(A<0){
        return 0;
    }
    int rev=0;
    int temp = A;
    while(temp > 0){
        int digit = temp%10;
        rev = rev*10 + digit;
        temp /= 10;
    }
    if(rev == A){
        return 1;
    }
    return 0;
}
