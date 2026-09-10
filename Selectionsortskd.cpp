#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={64,25,12,22,11};
    int n=arr.size();
    for(int i=0;i<n;i++){
        int minindex=i;
      for(int j=i+1;j<n;j++){
         if(arr[j]<arr[minindex]){
            minindex=j;
         }
      }
      swap(arr[i],arr[minindex]);
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<",";
    }
}