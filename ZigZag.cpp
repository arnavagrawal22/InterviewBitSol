string Solution::convert(string A, int B) {
    string res;    
    int len = A.length();
    if(B == 1 || B > len){
        return A;
    }
    for(int i = 0 ; i < B ; i ++){
        int dir = -1;
        
        for(int j = i ; j < len ;){
            if(i == 0 || i == B-1){
                res.push_back(A[j]);
                j += (B-1)*2;
            }
            else{
                res.push_back(A[j]);
                if(dir == -1){
                    j+= (B -i-1)*2;
                }
                else{
                    j+= (i)*2;
                }
                dir *= -1;
            }

        }
    }
    return res;
}
