#include<iostream>
#include<vector>
using namespace std;
void substring(string str,vector<string>& ans,string output,int index){
    if(index>=str.length()){
        ans.push_back(output);
        return;
    }
    substring(str,ans,output,index+1);
    char element=str[index];
    output.push_back(element);
    substring(str,ans,output,index+1);
     
}
int main(){
    string str="abc";
    vector<string> ans;
    string output="";
    int index=0;
     substring(str,ans,output,index);
     cout<<"the subsequence of string is"<<endl;
     for(int i=0;i<ans.size();i++){
        cout<<"[";
    cout<<ans[i]<<",";
    cout<<"]";
     }

}