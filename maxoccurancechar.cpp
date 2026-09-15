#include<iostream>
using namespace std;
char getmaxi(string s){
  int arr[26]={0};
  int num=0;
for(int i=0;i<s.length();i++){
    if(s[i]>='a'||s[i]<='z'){
        num=s[i]-'a';
    }
    else{
      num=s[i]-'A';
    }
    arr[num]++;
} 
int maxi=-1;
int ans=-1;
char ch;
for (int j = 0; j < 26; j++)
{
    if(maxi<arr[j]){
        maxi=arr[j];
        ans=j;
    }
}
char finalch='a'+ans;
return finalch;

}
int main(){
    string s="usamaa";
    cout<<getmaxi(s)<<endl;
}