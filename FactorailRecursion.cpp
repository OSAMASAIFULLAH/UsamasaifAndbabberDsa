#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    int fact1=n*fact(n-1);
    return fact1;
}
int main(){
    int n=4;
    cout<<fact(n);
}