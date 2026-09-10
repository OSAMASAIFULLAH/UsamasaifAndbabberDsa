#include<iostream>
using namespace std;
string Plandrom(string str,int s,int e){
   if(s>=e){
    return str;
   }
   swap(str[s],str[e]);
  return Plandrom(str,s+1,e-1);

}
int main(){
    string str="usama";
    int s=0;
    int e=str.length()-1;
   string revstr=Plandrom(str,s,e);
   if(revstr==str){
    cout<<"the given string is plandrom"<<endl;
   }
   else{
    cout<<"the given string is not a plandrom"<<endl;
   }


}