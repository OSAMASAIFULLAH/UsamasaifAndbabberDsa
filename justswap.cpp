#include<iostream>
using namespace std;
int main(){
	int arr1[]={12,8,3,5};
	int a=4;
	int arr2[]={8,12};
	int b=2;
	int arr3[]={3,5};
	int arr4[]={3,5,8,12};
	for(int i=0;i<b;i++){
		arr1[i]=arr2[i];
	}
	for(int j=0;j<b;j++){
		arr1[j]=arr3[j];
	}
	for(int k=0;k<a;k++){
		arr1[k]=arr4[k];
	}
	for(int l=0;l<a;l++){
		cout<<arr1[l]<<",";
	}
}
