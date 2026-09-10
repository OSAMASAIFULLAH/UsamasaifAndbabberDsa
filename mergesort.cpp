#include <iostream>
using namespace std;
//void merge(int* arr,int s,int e){
//
//int mid=(s+e)/2;
//int len1=mid-s+1;
//int len2=e-mid;
//int *first=new int[len1];
//int *second=new int[len2];
//int mainindex=s;
//for(int i=0;i<len1;i++){
//	first[i]=arr[mainindex++];
//}
//int k=mid+1;
//for(int i=0;i<len2;i++){
//	second[i]=arr[k++];
//}
//int index1=0;
//int index2=0;
//mainindex=s;
//while(index1<len1&&index2<len2){
//	if(first[index1]<second[index2]){
//	arr[mainindex++]=first[index1++];	
//	}
//	else{
//	arr[mainindex++]=second[index2++];	
//	}
//}
//cout<<"the index1 is "<<index1<<"the index2 is "<<index2<<endl;
//while(index1<len1){
//	arr[mainindex++]=first[index1++];
//}
//while(index2<len2){
//	arr[mainindex++]=second[index2++];
//}
//}
void mergesort(int* arr,int s,int e){
	

   if(s>=e){
   	return ;
   }
   int mid=(s+e)/2;
   mergesort(arr,s,mid);
   mergesort(arr,mid+1,e);
   
//   merge(arr,s,e);
int len1=mid-s+1;
int len2=e-mid;
int *first=new int[len1];
int *second=new int[len2];
int mainindex=s;
for(int i=0;i<len1;i++){
	first[i]=arr[mainindex++];
}
int k=mid+1;
for(int i=0;i<len2;i++){
	second[i]=arr[k++];
}
int index1=0;
int index2=0;
mainindex=s;
while(index1<len1&&index2<len2){
	if(first[index1]<second[index2]){
	arr[mainindex++]=first[index1++];	
	}
	else{
	arr[mainindex++]=second[index2++];	
	}
}

while(index1<len1){
	arr[mainindex++]=first[index1++];
}
while(index2<len2){
	arr[mainindex++]=second[index2++];
}
}
int main(){
int	numbers[]={12,8,9,3};
int n=4;
int s=0;
int e=3;
mergesort(numbers,s,e);
for(int j=0;j<n;j++){
//	cout<<"i am running"<<" "<<endl;
	cout<<numbers[j]<<",";
}	
}
