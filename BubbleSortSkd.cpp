#include<iostream>
using namespace std;
void bubblesort(int arr[],int size){
   if(size==0){
    return;
   }
   for(int i=0;i<size-1;i++){
       if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);   
    }
   }
   cout<<"the process of swaping is"<<endl;
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
bubblesort(arr,size-1);
return ;

}
int main(){
    int arr[]={5,6,1,3,2,0};
    int size=6;
    bubblesort(arr,size);
    cout<<"the sorted form of an array is"<<endl;
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
    
}