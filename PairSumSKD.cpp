#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    vector<vector<int>> result;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]+arr[j]==5){
                result.push_back({arr[i],arr[j]});
                
            }
        }
    }
    for(int k=0;k<result.size();k++){
        for(int l=0;l<2;l++){
            cout<<result[k][l]<<" ";
        }
        cout<<endl;
    }
}