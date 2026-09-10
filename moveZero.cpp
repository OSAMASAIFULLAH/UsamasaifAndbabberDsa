#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,3,12};
    int i=0;
    for (int j = 0; j < 5; j++)
    {
      if(arr[j]!=0){
        swap(arr[i], arr[j]);
        i++;
      } 
     
    }
    cout<<"after moving the zeros";
   for(int j=0;j<5;j++){
    cout<<arr[j]<<",";
   }
    
    
}