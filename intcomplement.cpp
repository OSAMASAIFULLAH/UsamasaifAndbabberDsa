#include<iostream>
using namespace std;
int main(){
    int n=5;
    int mask=0;
    int temp=n;
    int ans;
    while (temp>0)
    {
       mask=((mask<<1)|1);
        temp=temp>>1;
    }
    ans=n^mask;
    cout<<"the complement of 5 is"<<ans;
    
}