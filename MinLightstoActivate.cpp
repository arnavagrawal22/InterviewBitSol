int Solution::solve(vector<int> &A, int B) {
    int*arr = new int [30000];
    int n = A.size();
    int count = 0;
    for(int i =0;i < n; i++){
        int left = i - B + 1;
        int right = i + B - 1;
        if(left < 0){
            left = 0;
        }
        if(right >= n){
            right = n-1;
        }
        int flag = 0;
        for(int j = left; j <= right ; j++){
            if(arr[j] == 1){
                flag = 1;
                break;
            }
        }
        if(!flag){
            int light_idx = -1;
            for(int j = i; j <= right ; j++){
                if(A[j] == 1){
                light_idx = j;
                }
            }  
            if(light_idx == -1){
                for(int j = left; j <= i ; j++){
                    if(A[j] == 1){
                        light_idx = j;
                    }
                }  
            }
            if(light_idx == -1){
                return -1;
            }
            arr[light_idx] = 1;
            count ++ ;
        }
    }
    return count;
}
