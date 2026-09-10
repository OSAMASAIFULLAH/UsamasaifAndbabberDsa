#include<iostream>
using namespace std;
int sumar(int* arr,int size,int s,int i){
	
	if(size==i){
		
		return s=s+(*arr);
	}
	s=s+(*arr);
	
	return sumar(arr+1,size,s,i+1);
	
}
int main(){
	int arr1[5]={3,2,5,1,6};
//	cout<<arr1+1;
	int size=5;
	int sum=0;
	int index=0;
	cout<<sumar(arr1,size,sum,index);
}
