int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    int num1= -1;
    int num2= -1;
    int count1 = 0;
    int count2 = 0;
    for(int i = 0 ; i < n ; i ++  ){
        if(A[i] == num1){
            count1++;
        }
        else if(A[i] == num2){
            count2++;
        }
        else if(count1 == 0){
            num1 = A[i];
            count1 ++;
        }
        else if(count2 == 0){
            num2 = A[i];
            count2 ++;
        }
        else{
            count1--;
            count2--;
        }
    }
    count1 = 0;
    count2 = 0;
    for(int i = 0;i<n;i++){
        if(A[i] == num1){
            count1++;
        }
        if(A[i] == num2){
            count2++;
        }
    }
    if(count1 > n/3){
        return num1;
    }
    if(count2 > n/3){
        return num2;
    }
    return -1;
}
