#include<iostream>
using namespace std;
int power(int n,int p){

    if(p==0){
        return 1;
    }
    int r=power(n,p/2);
    if(p%2==0){
     r=r*r;
    }
    else{
   r=n*r*r;
    }
    return r;
}
int main(){
    int num=2;
    int pow=8;
    int result=power(num,pow);
    cout<<"the result is"<<result;
}