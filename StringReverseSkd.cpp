#include<iostream>
using namespace std;
string Reverse(string name,int f,int l){
    string nam2="jamil";
    if(f>=l){
        return name;
    }
    swap(name[f],name[l]);
    cout<<"the name is"<<name<<endl;
  string rname= Reverse(name,f+1,l-1);
    return rname;
    

}
int main(){
    string name="usama";
   int s=0;
   int e=name.length()-1;
  string reName= Reverse(name,s,e);
   cout<<"the reverser of a string is"<<endl;
   cout<<reName;
}