#include<iostream>
using namespace std;
int main(){
    int ans=0;
    // int arr[7]={3,7,2,2,7,3,4};
    // for(int i=0;i<7;i++){
    //     ans=ans^arr[i];
    // }
    // cout<<"the unique number in array is"<<endl;
    // cout<<ans;
    int a=3;
    int b=7;
    int c=3;
    ans=a^b;
    cout<<"first"<<ans<<endl;
    ans=ans^c;
    cout<<"second"<<ans<<endl;


}