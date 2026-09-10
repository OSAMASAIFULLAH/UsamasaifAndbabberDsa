#include<iostream>
using namespace std;
int main(){
int arr[5]={1,2,3,4,3};
int ans1=0;
int ans2=0;
for(int i=0;i<5;i++){
    ans1=ans1^arr[i];
}
for(int j=0;j<4;j++){
    ans2=ans2^arr[j];
}
cout<<"the duplicate value is="<<(ans1^ans2);
}