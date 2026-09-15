#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,7,9,11};
    int s=0;
    int e=4;
    int num=2;

   int mid=(s+e)/2;
    while (s<=e)
    {
        if(arr[mid]==num){
            cout<<"element is found at"<<mid<<endl;
            break;
        }
       else if(arr[mid]<num){
            s=mid+1;
            e=e;
        }
       else{
           e=mid;
           s=s; 
        }
       mid=(s+e)/2;
    }
    
}