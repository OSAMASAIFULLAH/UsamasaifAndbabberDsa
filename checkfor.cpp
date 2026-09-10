#include<iostream>
using namespace std;
int main(){
	int original[]={1,2,3,4};
	int temp[]={5,6,7,8};
	for(int i=0;i<4;i++){
		original[i]=temp[i];
	}
	for(int j=0;j<4;j++){
		cout<<original[j]<<",";
	}
}
