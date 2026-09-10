#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={10,1,7,6,14,9};
    int n=arr.size();
    for(int i=1;i<n-1;i++){
        bool iswap=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                iswap=true;
            }
        }
        if(iswap==false){
            break;
        }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<",";
    }
}
