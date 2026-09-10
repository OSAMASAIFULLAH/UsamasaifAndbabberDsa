#include<iostream>
using namespace std;
int PivotBinary(int arr[],int s,int e){
    int mid=(s+e)/2;
    while(s<e){
       if(arr[mid]>arr[0]){
        s=mid+1;
       }
       else{
        e=mid;
       }
       mid=(s+e)/2;
    }
    return e;
}
int main(){
    int arr[6]={6,7,9,1,2,3};
    int s=0;
    int end=5;
   int pivot=PivotBinary(arr,s,end);
   cout<<"the pivot element is on index"<<endl;
    cout<<pivot;
}