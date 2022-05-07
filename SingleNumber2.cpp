#include<bitset>
int Solution::singleNumber(const vector<int> &A) {
    vector<int>bits(32,0);
    int r = 0;
    for(int i : A){
        bitset<32>temp(i);
        for(int i = 0 ; i < 32 ; i++){
            if(temp[i] == 1){
                bits[i]++;
                bits[i]%=3;
            }
        }
    }
    for(int i =0;i<32;i++){
        if(bits[i] == 1){
            r+=pow(2,i);
        }
    }
    return r;

}
