#include<iostream>
#include<vector>
using namespace std;
bool ispossible(vector<int> book,int mid,int size){
    int pageCount=0;
for(int i=0;i<book.size()-1;i++){
    if(pageCount+book[i]){
        pageCount+=book[i];
    }
    else{
        pageCount++;
        if(pageCount>size||book[i]>mid){
            return false;
        }
        pageCount=book[i];
    }
}
return true;
}
int partition(vector<int> book,int n){
    int s=0;
    int e=0;
    int ans=0;
    for(int i=0;i<book.size()-1;i++){
        e+=book[i];
    }
    int mid=(s+e)/2;
    while(s>e){
        if(ispossible(book,mid,n)){
         ans=mid;
         e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return mid;
}
int main(){
vector<int> book={10,20,30,40};
int n=2;
int result=partition(book,n);
cout<<"the result is="<<result;
}