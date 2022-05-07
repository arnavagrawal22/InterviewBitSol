#include<bitset>
int Solution::solve(int n, int p1, int p2) {
    p1--;
    p2--;
    int bit1 =  (n >> p1) & 1; 
    int bit2 =  (n >> p2) & 1;
    int x = (bit1 ^ bit2); 
    x = (x << p1) | (x << p2);
    int result = n ^ x;
    return result;
}
