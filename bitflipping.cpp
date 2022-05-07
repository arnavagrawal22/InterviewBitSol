#include<bitset>
int Solution::solve(int A) {
    bitset<32>a(A);
    a.flip();
    string s = a.to_string();
    int i =0;
    while(s[i]=='1'){
        s[i]='0';
        i++;
    }
    bitset<32>b(s);
    return b.to_ulong();
}
