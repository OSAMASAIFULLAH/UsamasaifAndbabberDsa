#include<iostream>
using namespace std;
int main(){
    int num=2;
    int n=2;
    while (n<=num)
    {
        n=n*2;
        if(n==num){
            cout<<"yes the number is power of 2"<<endl;
            return 0;
        }
    }
    cout<<"the number is not in power of two"<<endl;
    
}