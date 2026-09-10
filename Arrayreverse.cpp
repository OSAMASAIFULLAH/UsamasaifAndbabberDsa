#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Reverse(vector<int>& arr){
    reverse(arr.begin()+3+1,arr.end());
}
int main(){
    vector<int> arr={1,2,3,4,5,6};
    Reverse(arr);
    cout<<"the full rotated form of array is"<<endl;
    for(int i=0;i<arr.size();i++){
     cout<<arr[i]<<", ";
    }
}
