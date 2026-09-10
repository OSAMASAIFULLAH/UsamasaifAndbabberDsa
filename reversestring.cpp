#include<iostream>
using namespace std;
//void reverse(string n,int l){
//	if(l<0){
//		return ;
//	}
//    cout<<n[l];
//    l--;
//    reverse(n,l);
//
//}

int main(){
	string name="Aqssanavas";
   int l=name.length();
   cout<<"the tottal length is"<<l<<endl;
   cout<<"the actual name is"<<name<<endl;
   reverse(name,l);
   
}
