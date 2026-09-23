#include<iostream>
using namespace std;
void Sum2d(int arr[][3],int n,int m){
       for(int i=0;i<3;i++){
           int sum=0;
        for(int j=0;j<3;j++){
                sum+=arr[i][j];
        }
        cout<<sum<<" ";
    } 
}
bool isparesent(int arr[][3],int target,int n,int m){
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int arr[3][3];
    cout<<"enter the numbers of array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"printing the 2d array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"enter the target element"<<endl;
    cin>>target;
    int n=3;
    int m=3;
    if(isparesent(arr,target,n,m)){
        cout<<"element is paresent"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    cout<<"printing the sum of rows"<<endl;
    Sum2d(arr,n,m);
    
}