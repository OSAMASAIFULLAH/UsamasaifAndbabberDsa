#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,7,8,5};
    int size=5;
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}