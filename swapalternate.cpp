#include<iostream>
using namespace std;
void swapalternate(int arr[]){
    int i=0;
    int j=1;
    int size=5;
    while(j<size){
       swap(arr[i],arr[j]);
       i=i+2;
       j=j+2;
    }
}
int main(){
    int arr[]={1,2,7,8,5};
    swapalternate(arr);
    cout<<"after swaping the alternate element of array"<<endl;
    for(int i=0;i<4;i++){
      cout<<arr[i]<<",";
    }
}