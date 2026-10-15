#include<iostream>
using namespace std;
bool isprime(int n){
    if(n<=1){
        false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n=10;
    int count=0;
    for(int i=2;i<n;i++){
        if(isprime(i)){
            count++;
        }
    }
    cout<<"the tottla prime number within n="<<count<<endl;
}