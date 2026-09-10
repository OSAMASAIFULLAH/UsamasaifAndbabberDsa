#include<iostream>
#include<vector>
using namespace std;
void permutation(string str,vector<string>& st,int index,string output){
    if(index>=str.size()){
        st.push_back(output);
        return;
    }
    for(int i=index;i<str.size();i++){
        swap(str[i],str[index]);

        output=str;

        cout<<output<<endl;
        permutation(str,st,index+1,output);
        swap(str[i], str[index]); 

    }
}
int main(){
    string str="abc";
    vector<string> st;
    int index=0;
    string output;
    permutation(str,st,index,output);
    for(int i=0;i<st.size();i++){
        cout<<st[i]<<",";
    }
}