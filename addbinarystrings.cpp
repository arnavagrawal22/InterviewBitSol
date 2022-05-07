string Solution::addBinary(string A, string B) {
    string res;
    int i = A.length()-1;
    int j = B.length()-1;
    int d1;
    int d2;
    int c = 0;
    while(i >= 0 || j >= 0){
        if(i >= 0){
            d1 = A[i] - '0';
        }
        else{
            d1 = 0;
        }
        if(j >= 0){
            d2 = B[j] - '0';
        }
        else{
            d2 = 0;
        }
        int sum = (c + d1+d2)%2;
        c = (c+d1+d2)/2;
        res.push_back(48+sum);
        i--;
        j--;
    }
    if(c!=0){
        res.push_back(48+c);
    }
    reverse(res.begin(),res.end());
    return res;

}

