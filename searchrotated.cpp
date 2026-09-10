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
    return s;
}
int Binarysearch(int arr[],int s,int e,int key){
    int mid=(s+e)/2;
    while (s<=e){
      if(key==arr[mid]){
        return mid;
      }
      if(key>arr[mid]){
        s=mid+1;
      }
      else{
        e=mid-1;
      }
      mid=(s+e)/2;
    }
  return -1; 
}
int main(){
    int arr[5]={7,9,1,2,3};
    int s=0;
    int e=4;
    int key=7;
    int result;
    int pivot=PivotBinary(arr,s,e);
    if(key>=arr[pivot]&&key<=arr[e]){
      result=Binarysearch(arr,s=pivot,e,key);
      cout<<"the result is="<<result<<endl;
    }
    else{
         result=Binarysearch(arr,s,e=pivot-1,key);
         cout<<"the result is="<<result<<endl;
};

}