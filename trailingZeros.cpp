#include<bitset>
int Solution::solve(int A) {

    // bitset<64> bit;
    // bit |= A;
 
    // int zero = 0;
 
    // for (int i = 0; i < 64; i++) {
    //     if (bit[i] == 0)
    //         zero++;
    //     else
    //         break;
    // }
 
    // return zero;
    int count = 0;
    while((A&1) == 0){
        count ++;
        A >>= 1;
    }
    return count;
}
