#include<iostream>
using namespace std;
int searching(int *arr,int s,int e){

 if(s==0){
 	if(e==(*arr)){
 		return true;
	 }
	 else{
	 	return false;
	 }
 }
 if(e==(*arr)){
 	return true;
 }
	
 return searching(arr+1,s-1,e);
}
int main(){
int arr[]={1,2,3,4,5};
int size=4;
int element=6;
cout<<searching(arr,size,element);
	
}
