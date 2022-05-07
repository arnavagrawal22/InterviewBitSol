int Solution::solve(int A) {
    if(A == 0){
        return 0;
    }
    if(A < 0){
        A *= -1;
    }
    int run_sum = 0;
    for(int i = 1;;i++){
        run_sum += i;
        if(run_sum == A){
            return i;
        }
        if(run_sum > A){
            int dif = run_sum - A;
            if(dif % 2 == 0){
                return i;
            }

        }
    }
}
