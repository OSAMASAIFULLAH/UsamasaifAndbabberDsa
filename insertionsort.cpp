#include<iostream>
using namespace std;
void insertion(int* arr,int ele,int l){
	if(ele==l){
		cout<<"by the way i am not running"<<endl;
		for(int i=0;i<l;i++){
			cout<<arr[i]<<",";
		}
		return ;
	}
	for(int j=ele;j>0;j--){
		if(arr[j]<arr[j-1]){
			swap(arr[j],arr[j-1]);
		}
	}
	insertion(arr,ele+1,l);
}
int main(){
	int arr[]={ 7, 12, 9, 11, 3};
	int l=sizeof(arr)/sizeof(arr[0]);
	int ele =0;
	insertion(arr,ele+1,l);
	
}
