#include<iostream>
#include<vector>
using namespace std;
int Mtop(vector<int> arr){
    int s=0;
    int e=arr.size()-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]<arr[mid+1]){
            s=mid;
        }
        else if(arr[mid]<arr[mid-1]){
            e=mid;
        }
        mid=(s+e)/2;
    }
}
int main(){
    vector<int> arr={1,2,3,4,5,1};
    int topindex=Mtop(arr);
    cout<<"the top index of mountain array is"<<topindex<<endl;

}