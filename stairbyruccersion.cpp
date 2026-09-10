#include<iostream>
using namespace std;
int stair(int num){
	if(num<0){
		return 0;
	}
	if(num==0){
		return 1;
	}
	return stair(num-1)+stair(num-2);
}
int main(){
	int n;
	cin>>n;
	cout<<stair(n);
}
