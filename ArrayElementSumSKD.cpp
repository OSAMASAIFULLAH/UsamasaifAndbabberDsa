#include<iostream>
using namespace std;
int AddElement(int arr[],int size){
int result=0;
for(int i=0;i<size;i++){
    result=result+arr[i];
}
return result;
}
int main(){
int arr[4]={1,2,3,4};
cout<<"the sum of all element of array is"<<AddElement(arr,4)<<" ";

}