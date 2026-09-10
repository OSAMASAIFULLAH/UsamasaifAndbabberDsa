#include<iostream>
using namespace std;
int leftmost(int arr[],int s,int e,int key){
    cout<<"ji"<<endl;
    int left=-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==key){
           left=mid;
           e=mid-1;
        }
        else if(key>arr[mid]){
            e=mid-1;
        }
        else if(key<arr[mid]){
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return left;
}
int Rightmost(int arr[],int s,int e,int key){
    cout<<"ji"<<endl;
    int right=-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==key){
           right=mid;
           s=mid+1;
        }
        else if(key>arr[mid]){
            e=mid-1;
        }
        else if(key<arr[mid]){
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return right;
}
int main(){
    int arr[]={1,2,3,3,5};
    int s=0;
    int e=4;
    int key=3;
    int LMS=leftmost(arr,s,e,key);
    cout<<"the leftmost occurance is"<<LMS<<endl;
    int RMS=Rightmost(arr,s,e,key);
    cout<<"the righttmost occurance is"<<RMS<<endl;
}