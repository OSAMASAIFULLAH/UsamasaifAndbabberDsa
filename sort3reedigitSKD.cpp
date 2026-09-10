#include<iostream>
using namespace std;
int main(){
    int arr[9]={0,2,2,1,0,1,1,0,2};
    int i=0;
    int j=0;
    int k=8;
    while(j<=k){
        if(arr[j]==1){
            j++;
        }
       else if(arr[j]==0){
            swap(arr[i],arr[j]);
                i++;
                j++;
            
        }
        else{
            swap(arr[j],arr[k]);
            k--;
        }
    }
    for(int l=0;l<9;l++){
        cout<<arr[l]<<",";
    }

}