#include<iostream>
using namespace std;
int main(){
    string latters[]={"a","b","c"};
    for(int i=0;i<8;i++){
        for(int j=0;j<3;j++){
            if(i&(1<<j)){
                cout<<latters[j];
            }
        }
        cout<<",";
    }
    // int a=1;
    // int b=3;
    // if(a&b){
    //     cout<<"yes"<<endl;
    // }
    // else{
    //     cout<<"no"<<endl;
    // }
}