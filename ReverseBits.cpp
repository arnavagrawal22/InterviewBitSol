#include<bitset>
unsigned int Solution::reverse(unsigned int a) {
    // bitset<32> b(A);                       // store in binary form 
    // string s=b.to_string();               //put it in string
    // string k(s.rbegin(),s.rend());       //reverse string
    // bitset<32>d(k);                      //again put new string k  in bitset
    // return  d.to_ulong();
    unsigned int b;
    for(int i = 0 ;i < 32 ;i ++){
        b<<=1;
        b |= (a&1);
        a>>=1;
    }
    return b;
}
