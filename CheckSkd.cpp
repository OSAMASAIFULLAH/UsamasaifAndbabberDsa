#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(i==2){
            continue;
        }
        cout<<arr[i];
    }
}