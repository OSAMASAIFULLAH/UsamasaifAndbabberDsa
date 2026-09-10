#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    
    int q=e;
    int pivot=arr[s];
    for(int i=s+1;i<=q;i++){
    if(arr[q]>pivot){
       q--;
       i--;
       
    }
    else if(arr[i]>pivot){
        swap(arr[i],arr[q]);
        q--;
    }
}

    swap(arr[s],arr[q]);
    return q;
}
void QuickSort(int arr[],int s,int e){
    if(s>=e){
  
        return;
    }
    int p=partition(arr,s,e);
    cout<<"the first p is"<<p<<endl;
    QuickSort(arr,s,p-1);
    QuickSort(arr,p+1,e);

}
int main(){
    int arr[5]={4,2,3,1,7};
    int s=0;
    int e=5-1;
    QuickSort(arr,s,e);
    cout<<"the final sorted array is"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<",";
    }

}