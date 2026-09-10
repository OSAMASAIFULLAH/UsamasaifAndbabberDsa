#include<iostream>
#include<vector>
using namespace std;
void Rotate(vector<int>& arr,int k){
int n=arr.size();
vector<int> newarr(n);
for(int i=0;i<n;i++){
    newarr[(i+k)%7]=arr[i];
}
arr=newarr;
}
int main(){
vector<int> arr={1,2,3,4,5,6,7};
int k=3;
Rotate(arr,k);
cout<<"after rotating array right k step"<<endl;
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<",";
}
}