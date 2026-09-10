#include<iostream>
using namespace std;
void bubblesort(int* arr,int l){
	if(l==1){
		cout<<"i am not working"<<endl;
		for(int j=0;j<8;j++){
			cout<<arr[j];
		}
		return ;
	}
	for(int i=0;i<l;i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);		
				}
	}
   bubblesort(arr,l-1);
}
int main(){
	int arr1[]={5,6,1,3,0,2,3,4};
	int length=(sizeof(arr1)/sizeof(arr1[0]));
	cout<<"the lenght is"<<length<<endl;
    bubblesort(arr1,length-1);
 
}
