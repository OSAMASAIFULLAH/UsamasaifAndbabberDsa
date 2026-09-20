#include<iostream>
using namespace std;
bool compare(int a[26],int b[26]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
bool permutation(string s1,string s2){
    int count1[26]={0};
    for(int i=0;i<s1.size();i++){
        int index=s1[i]-'a';
        count1[index]++;
    }
    int count2[26]={0};
    int i=0;
    int windowsize=s1.length();
    while (i<s1.size())
    {
    int index=s2[i]-'a';
    count2[index]++;
    i++;
    }
    if(compare(count1,count2)){
        return true;
    }
    while (i<s2.length()){
char newchar=s2[i];
int index=newchar-'a';
count2[index]++;
char oldchar=s2[i-windowsize];
index=oldchar-'a';
count2[index]--;
i++;
if(compare(count1,count2)){
    return true;
}
    }
  
  return false;  
}
int main(){
    string s1="ab";
    string s2="eidbcoo";
    cout<<permutation(s1,s2)<<endl;

}