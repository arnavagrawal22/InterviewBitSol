int bitonic(vector<int> &A,int start,int end){
    int mid = (start + end)/2;
    if(A[mid]>A[mid-1] && A[mid]>A[mid+1]){
        return mid;
    }
    if(A[mid]>A[mid-1]){
        return bitonic(A,mid+1,end);
    }
    else{
        return bitonic(A,start,mid-1);
    }
}

int binary_a(vector<int> &A,int start,int end,int ele){
    int mid = (start+end)/2;
    if(start>end){
        return -1;
    }
    if(A[mid] == ele){
        return mid;
    }
    if(A[mid] > ele){
        return binary_a(A,start,mid-1,ele);
    }
    if(A[mid] < ele){
        return binary_a(A,mid+1,end,ele);
    }

}

int binary_d(vector<int> &A,int start,int end,int ele){
    int mid = (start+end)/2;
    if(start>end){
        return -1;
    }
    if(A[mid] == ele){
        return mid;
    }
    if(A[mid] < ele){
        return binary_d(A,start,mid-1,ele);
    }
    if(A[mid] > ele){
        return binary_d(A,mid+1,end,ele);
    }
    
}

int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int idx = bitonic(A,0,n-1);
    if(B == A[idx]){
        return idx;
    }
    int ans1 = binary_d(A,idx+1,n-1,B);
    int ans2 = binary_a(A,0,idx-1,B);
    return max(ans1,ans2);

}
