int Solution::titleToNumber(string A) {
    int ans = 0;
    for(int j = A.length()-1;j>=0;j--){
        ans = ans + (A[j]-64)*pow(26,A.length()-j-1);
    }
    return ans;
}
