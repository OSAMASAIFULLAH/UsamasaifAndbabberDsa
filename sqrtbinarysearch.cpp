#include<iostream>
using namespace std;
int sqrt(int n){
    int s=0;
    int e=n;
    int mid=(s+e)/2;
    int ans=0;
    while(s<=e){
        if(mid*mid==n){
            return mid;
        }
        if(mid*mid>n){
            e=mid-1;
        }
        else if(mid*mid<n){
            ans=mid;
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
double morePrecision(int n,int precision,int tempsol){
    double ans=tempsol;
    double factor=1;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
          ans=j;
        }
    }
    return ans;
}
int main(){
    int n=27;
    int pricision=sqrt(n);
    cout<<"the square root of "<<n<<"="<<pricision<<endl;
   double more= morePrecision(n,4,pricision);
    cout<<"the square root in more precision  "<<n<<"= "<<more<<endl;
}