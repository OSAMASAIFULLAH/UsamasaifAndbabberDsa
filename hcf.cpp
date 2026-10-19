#include<iostream>
using namespace std;
int main(){
    int a=24;
    int b=72;
    while(a!=b){
        if(a<b){
            b=b-a;
        }
        else{
            a=a-b;
        }
    }
    cout<<"the hcf of a and b is="<<a<<endl;
}