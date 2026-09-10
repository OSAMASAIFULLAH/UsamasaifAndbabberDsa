#include<iostream>
#include<vector>
using namespace std;
int Binarysearch(vector<int>& arr,int s,int end,int item){
    int mid=(s+end)/2;
    if(s>=end){
        return -1;
    }
    cout<<"the mid element is: "<<arr[mid]<<endl;
    if(arr[mid]==item){
        cout<<"the element is found at index: "<<endl;
        return mid;
    }
   if(arr[mid]>item){
   return Binarysearch(arr,s,mid,item);
   }
   if(arr[mid]<item){
   return Binarysearch(arr,mid+1,end,item);
   }
}
int main(){
    vector<int> arr={2,4,5,10,14,18};
    int item=14;
    int s=0;
    int end=5;
 int result= Binarysearch(arr,s,end,item);
 cout<<"the element is at index: ";
 cout<<result;
}