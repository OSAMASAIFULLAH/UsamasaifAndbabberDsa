#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,4,5};
    int arr1[3]={3,4,5};
    vector<int> result;
int i=0;
int j=0;
while(i<6&&j<3){
    if(arr[i]==arr1[j]){
        result.push_back(arr[i]);
        j++;
        i++;
        continue;
    }
    cout<<"hi"<<endl;
    if(arr[i]<arr1[j]){
        i++;    
    }
    else{
        j++;
    }
}
cout<<"the intersection of arr and arr1 is"<<endl;
cout<<result[0]<<endl;
for(int k=0;k<result.size();k++){
    cout<<result[k]<<" ";
}
}