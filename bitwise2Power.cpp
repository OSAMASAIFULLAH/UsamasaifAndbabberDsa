#include<iostream>
using namespace std;
int main(){
    int num=3;
    if (num > 0 && (num & (num - 1)) == 0){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}