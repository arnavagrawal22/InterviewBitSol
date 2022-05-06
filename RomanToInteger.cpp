int value(char c){
    if(c == 'I'){
        return 1;
    }
    else if(c == 'V'){
        return 5;
    }
    else if(c == 'X'){
        return 10;
    }
    else if(c == 'L'){
        return 50;
    }
    else if(c == 'C'){
        return 100;
    }
    else if(c == 'D'){
        return 500;
    }
    else{
        return 1000;
    }
}


int Solution::romanToInt(string A) {
    int len = A.length()-1;
    int ans = value(A[len]);

    for(int i = len - 1;i>=0;i--){
        if(value(A[i])>= value(A[i+1])){
            ans += value(A[i]);
        }
        else{
            ans -= value(A[i]);

        }
    }
    return ans;

}
