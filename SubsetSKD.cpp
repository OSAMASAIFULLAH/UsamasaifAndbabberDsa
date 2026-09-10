#include<iostream>
#include<vector>
using namespace std;
void Subset(vector<int> nums,vector<int> output,vector<vector<int>>&ans,int index){
    if(index>=nums.size()){
        ans.push_back(output);
        return ;
    }
   Subset(nums,output,ans,index+1) ;
   int element=nums[index];
   output.push_back(element);
    Subset(nums,output,ans,index+1);



}
int main(){
    vector<int> nums={1,2,3};
    vector<int> output ;
    vector<vector<int>> ans;
    int index=0;
    Subset(nums,output,ans,index);
    cout<<"the subset of arr is"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<",";
        }
        cout<<"]";
    }
}
