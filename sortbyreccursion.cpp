#include<iostream>
using namespace std;
int main();
bool sort(int arr[],int index,int size){
	if(index==size||arr[index+1]==0){
		return true;
	}
	if(arr[index]>arr[index+1]){
	
		return false;
	}

return sort(arr,index+=1,size);
	
}
int main(){
	int arr1[13]={1,2,3,4,5,6,7,8,9,10,11,14,13};
	int size=12;
	int i=0;
	cout<<sort(arr1,i,size);
}
