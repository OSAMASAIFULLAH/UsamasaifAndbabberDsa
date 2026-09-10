#include<iostream>
#include<vector>
using namespace std;
vector<int> Sum(vector<int> arr1, vector<int> arr2){
    int sum=0;
    int carry=0;
    vector<int> Sum;
    int i=arr1.size()-1;
    int j=arr2.size()-1;
    while (i>=0&&j>=0){
       sum=arr1[i]+arr2[j];
       sum=sum%10;
       Sum.push_back(sum+carry);
       carry=sum/10;
       i--;
       j--;
    }
    while (i>=0)
    {
        Sum.push_back(arr1[i]+carry);
        i--;
    }
    
  
    
}
int main(){
    vector<int> arr1={1,2,3,4};
    vector<int> arr2={6};
    vector<int> sum=Sum(arr1,arr2);
}
