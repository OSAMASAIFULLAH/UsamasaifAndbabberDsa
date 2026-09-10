#include<iostream>
using namespace std;
int main(){
    int n=234;
    int prod=1;
    int sum=0;
    while(n>0){
        int n2=n%10;
        sum=sum+n2;
        prod=prod*n2;
        n=n/10;
    }
    cout<<"the prod is"<<prod<<endl;
    cout<<"the sum is"<<sum<<endl;
    cout<<"the difference is"<<prod-sum<<endl;
}
