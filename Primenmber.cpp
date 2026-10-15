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
int num=3;
if(isprime(num)){
    cout<<"yes the number is prime"<<endl;
}
else{
    cout<<"the number is not a prime"<<endl;
}
}