#include<iostream>
using namespace std;
void sortarr(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        while (arr[i]==0&&i<j){
            i++;
        }
        while (arr[j]==1&&i<j){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
      
        
    }
}
int main(){
    int arr[6]={0,1,1,0,0,1};
    sortarr(arr,6);
    cout<<"printing the sorted form of array"<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    
}