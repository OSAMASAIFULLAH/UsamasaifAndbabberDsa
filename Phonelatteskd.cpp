#include<iostream>
#include<vector>
using namespace std;
void lattercombination(string digit,string output,int index,vector<string> & ans,string latter[]){
    if(index>=digit.length()){
        ans.push_back(output);
        return;
    }
    int number=digit[index]-'0';
    string value=latter[number];
    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        lattercombination(digit,output,index+1,ans,latter);
        output.pop_back();
    }
}
int main(){
    string digit="23";
    string output;
    int index=0;
    vector<string> ans;
    string latters[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    lattercombination(digit,output,index,ans,latters);
    cout<<"the answers is"<<endl;
    for(int i=0;i<9;i++){
        cout<<ans[i]<<",";
    }


}