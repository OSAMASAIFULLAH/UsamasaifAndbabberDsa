#include<iostream>
using namespace std;
int main(){
    int a=3;
    int b=2;
    int count=0;
    while(a>0&&b>0){
        if((a&1)&(b&1)){
            count++;
        }
        a=a>>1;
        b=b>>1;
    }
    cout<<"the number of set bits in the XOR of a and b is "<<count;

}