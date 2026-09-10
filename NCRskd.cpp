#include<iostream>
using namespace std;
int ncr(int n,int r){
int nfact=n;
int rfact=r;
int minusfact=n-r;
for(int i=n-1;i>0;i--){
    nfact=nfact*i;
}
for(int j=r-1;j>0;j--){
    rfact=rfact*j;
}
for(int k=minusfact-1;k>0;k--){
    minusfact=minusfact*k;
}
return nfact/(rfact*minusfact);
}
int main(){
    int n=8;
    int r=2;
int result=ncr(n,r);
cout<<"the value of ncr is "<<result;
}