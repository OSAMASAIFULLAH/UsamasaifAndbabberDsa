#include<iostream>
using namespace std;
int Quicksort(int* arr,int s,int e){
int pivot=s;
int position=s;
for(int i=pivot+1;i<=e;i++){
	if(arr[pivot]>arr[i]){
		position+=1;
	}
}
swap(arr[pivot],arr[position]);
int y=s;
cout<<endl;
while(e>position&&s<position){
while(arr[s]<arr[position]){
	cout<<"the s is"<<s;
	s+=1;
}
cout<<endl;
while(arr[e]>arr[position]){
	cout<<"the e is"<<e;
	e-=1;
}
cout<<endl;
swap(arr[s],arr[e]);
}


return position;
}
void partition(int* arr,int s,int e){
	if(s>=e){
		return;
	}
	int position=Quicksort(arr,s,e);
	cout<<"the position is"<<position<<endl;
	partition(arr,s,position-1);
	partition(arr,position+1,e);
	
}
int main(){
	int arr[11]={3,5,1,8,2,4,12,12,14,14,2};
	int s=0;
	int e=11-1;
	partition(arr,s,e);
	for(int j=0;j<11;j++){
		cout<<arr[j]<<",";
	}
}
