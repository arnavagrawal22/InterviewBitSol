int Solution::solve(int A, int B, int C, int D) {
    if(A==B && C==D){
        return 1;
    }
    if(A==C && B==D){
        return 1;
    }
    if(A==D && B==C){
        return 1;
    }
    if(B==C && A==D){
        return 1;
    }
    if(B==D && A==C){
        return 1;
    }
    if(C==D && A==B){
        return 1;
    }
    return 0;

}
