int Solution::trailingZeroes(int A) {
    int ans = 0;
    int i = 1;
    int power = 1;
    while(A>power){
        power = pow(5,i++);
        ans += A/power;
    }
    return ans;
}
