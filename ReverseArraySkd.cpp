#include<iostream>
using namespace std;
void Reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    return ;
}
int main(){
int arr[4]={1,2,3,4};
Reverse(arr,4);
cout<<"the reverse form of array is"<<endl;
for(int i=0;i<4;i++){
    cout<<arr[i]<<" ";
}

}