#include<iostream>
using namespace std;
int binarysearch(int* arr1,int s,int e,int key){
	int mid=s+(e-s)/2;
	cout<<"the start is"<<s<<endl;
	cout<<"the end element is"<<e<<endl;
	if(s>e){
		return -1;
	}
	if(arr1[mid]==key){
		return 1;
	}
		
if(arr1[mid]>key){
	return	binarysearch(arr1,s,mid-1,key);	
}
if(arr1[mid]<key){
	return	binarysearch(arr1,mid+1,e,key);	
}
}
int main(){
	int arr[]={1,2,3,4,5,6};
    int	s=sizeof(arr)/sizeof(arr[0]);
    int test=7;
    int start=0;
    int end=s-1;
cout<<binarysearch(arr,start,end,test);
	
}
