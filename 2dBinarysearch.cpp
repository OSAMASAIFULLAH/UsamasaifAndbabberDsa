#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=60;
    int s=0;
    int e=11;
   int mid=(s+e)/2;
    while (s<=e)
    {
     int row=mid/4;
     int col=mid%4;
     if(target==arr[row][col]){
        cout<<"found"<<"row="<<row<<"col="<<col<<endl;
        return 0;
     }
     if(target>arr[row][col]){
        s=mid+1;
     }    
     if(target<arr[row][col]){
        e=mid-1;
     } 
    mid=(s+e)/2;   
    }
    
}