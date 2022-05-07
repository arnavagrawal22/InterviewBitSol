int Solution::gcd(int A, int B) {
    if(A == 0){
        return B;
    }
    if(B == 0){
        return A;
    }
    while(A!=B){
        if(A>B){
            A = A-B;
        }
        else if(B>A){
            B = B-A;
        }
        
    }
    return A;
}
