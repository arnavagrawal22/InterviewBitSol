void Solution::setZeroes(vector<vector<int> > &A) {
    int rows = A.size();
    int cols = A[0].size();
    vector<int>a;
    vector<int>b;
    for(int i = 0;i<rows;i++){
        int temp = 0;
        for(int j = 0 ; j < cols;j++){
            if(A[i][j] == 0){
                temp = 1;
                break;
            }
        }
        if(temp){
            a.push_back(1);
        }
        else{
            a.push_back(0);
        }
    }
    for(int i = 0;i<cols;i++){
        int temp = 0;
        for(int j = 0 ; j < rows;j++){
            if(A[j][i] == 0){
                temp = 1;
                break;
            }
        }
        if(temp){
            b.push_back(1);
        }
        else{
            b.push_back(0);
        }
    }
    for(int i = 0;i<rows;i++){
        for(int j = 0 ; j < cols;j++){
            if(a[i] == 1 || b[j] == 1){
                A[i][j] = 0;
            }
        }
    }
    
}
