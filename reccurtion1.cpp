#include<iostream>
using namespace std;
int saynumber(int n,string valu[]){
	if(n<10){
		cout<<"the value is"<<valu[n]<<endl;
		return 0;
	}
	
	int module=n%10;
	saynumber(n/10,valu);
	cout<<valu[module]<<endl;
	
}
int main(){
int a=423;
string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
saynumber(a,arr);
}
