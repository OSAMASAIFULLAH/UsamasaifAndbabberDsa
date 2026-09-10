#include<iostream>
using namespace std;
int check(int num){
	cout<<"num"<<num;
	if(num==0){
		return num;
	}
	return check(num-1);
}
int main(){
	int n=6;
	cout<<"the num value is"<<check(6)<<endl;
}
