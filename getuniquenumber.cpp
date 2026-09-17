#include<iostream>
using namespace std;
int getUnique(int arr[]){
    int ans=0;
    for(int i=0;i<7;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[]={3,7,2,2,7,3,4};
    cout<<"the unique element of array is"<<getUnique(arr)<<endl;

}