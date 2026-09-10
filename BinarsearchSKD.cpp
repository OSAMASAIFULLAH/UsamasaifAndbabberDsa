#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> arr,int size,int key){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(key==arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return -1;
}
int main(){
    vector<int> even={2,4,6,7,9,10};
    int odd[5]={3,5,9,10,13};
    int evenindex=binarysearch(even,6,11);
    cout<<"the index of 7 is"<<evenindex<<endl;
}