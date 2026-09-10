#include<iostream>

using namespace std;
void mergeSort(int* arr,int s,int e){
    if(s>=e){
        return ;
    }
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    int len1=mid-s+1;
    int len2=e-mid;
    int mainIndex=s;
    int *left=new int[len1];
    int *right=new int[len2];
    for(int i=0;i<len1;i++){
       left[i]=arr[mainIndex++];
    };
    int k=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k++];
    };
    mainIndex=s;
    int index1=0;
    int index2=0;
    while (index1<len1&&index2<len2)
    {
      if(left[index1]<right[index2]){
        arr[mainIndex++]=left[index1++];
      } 
      else{
        arr[mainIndex++]=right[index2++];
      } 
      /* code */
    }
    while (index1<len1)
    {
     arr[mainIndex++]=left[index1++] ; /* code */
    }
    while (index2<len2)
    {
      arr[mainIndex++]=right[index2++];  /* code */
    }
    
}
int main(){
  int arr[4]={12,8,9,3};
  int s=0;
  int e=3;
  mergeSort(arr,s,e);
  cout<<"the sorted array is"<<endl;
  for(int j=0;j<4;j++){
    cout<<arr[j]<<",";
  }



}