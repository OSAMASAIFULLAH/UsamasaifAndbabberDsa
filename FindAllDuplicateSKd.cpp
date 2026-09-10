#include<iostream>
using namespace std;
int main(){
    int arr[7]={2,2,3,3,4,4,1};
    for(int i=0;i<7;i++){
        int count=0;
        bool seen=false;
        for(int k=0;k<i;k++){
            if(arr[k]==arr[i]){
                seen=true;
            }
        }
        if(seen) continue;
        for(int j=0;j<7;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count==2){
            cout<<arr[i]<<endl;
            
        }
    }
}