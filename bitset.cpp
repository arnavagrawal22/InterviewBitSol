/*
#include<iostream>
#include<bitset>
using namespace std;

void print(bitset<32> x){
    cout<<x<<endl;
}
*/

int main(){
    bitset<32> b1(1520);
    bitset<32> b2(1240);
    
    print(b1);
    print(b2);
    
    // Count the number of set bits in b1 and store it in count1
    int count1 = b1.count();
    cout<<count1<<endl;
    
    // Count the number of unset bits in b2 and store it in count2
    int count2 = 32 -  b2.count();
    cout<<count2<<endl;
    
    // Flip all the odd bits in b1
    for(int i = 0; i < 32 ;  i++){
        if(i%2 == 1){
        b1.flip(i);

        }
    }
    
    print(b1);
    
    // print the XOR of both bitset
    cout << (b1 ^ b2) << endl;

    
    return 0;
}