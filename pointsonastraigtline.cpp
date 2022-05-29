int Solution::maxPoints(vector<int> &A, vector<int> &B) {
    int len = A.size();
    if(len <=2){
        return len;
    }
    int ans = INT_MIN;
    
    for(int i = 0 ; i < len ; i++){
        for(int j = i+1; j < len; j++){
            int maxi = 2;
            int x1 = A[i];
            int y1 = B[i];
            int x2 = A[j];
            int y2 = B[j];
            for(int k = 0 ; k < len ; k ++){
                if(k!=i && k!= j){
                    int x3 = A[k];
                    int y3 = B[k];
                    if(x3 == x1 && y3 == y1){
                        maxi++;
                    }
                    else if(x3 == x2 && y3 == y2){
                        maxi++;
                    }
                    else if((y2-y1) == 0){
                     if(y3-y1 == 0){
                            maxi++;
                        }
                    }
                    else if((x2-x1)!=0){
                        long long int temp1 = (y2-y1);
                        temp1 *= (x3-x1);
                        long long int temp2 = (x2-x1);
                        temp2 *= (y3-y1);
                        if(temp1 ==  temp2){
                            maxi ++;
                        }
                    }
                    else{
                        if(x3-x1 == 0){
                            maxi++;
                        }
                    }
                }
            }
            ans = max(maxi,ans);
        }

    }
    return ans;
}
