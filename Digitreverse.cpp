#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n=2147483648;
    int ans=0;
    while(n>0){
        int digit=n%10;
        ans=ans*10+digit;
        if(ans>INT_MAX || ans<INT_MIN){
            cout<<0;
            return 0;
        }
        n=n/10;
    }
    cout<<ans;
}