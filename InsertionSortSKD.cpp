#include<iostream>
using namespace std;
int main(){
    int arr[]={5,2,6,9,4};
    int n=5;
    for(int i=1;i<n-1;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            arr[j]=temp;
        }
    }
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<",";
    }
}