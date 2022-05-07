#include<bitset>
int Solution::numSetBits(unsigned int A) {
    // bitset<32>a(A);
    // return a.count();
    int count = 0;
    while(A){
        if(A&1 == 1){
            count ++;
        }
        A >>= 1;
    }
    return count;
}
