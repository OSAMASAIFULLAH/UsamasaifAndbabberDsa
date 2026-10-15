#include<iostream>
using namespace std;
int main(){
    int a=2;
    int b=4;
    int res=1;
    int m=1000000007;
        while (b>0)
    {
        if(b%2!=0){
        res=1ll*(res*a)%m;
        }
        a=1ll*(a*a)%m;
        b=b/2;
    }
  cout<<"the final result is"<<res;  
}