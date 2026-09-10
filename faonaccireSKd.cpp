#include<iostream>
using namespace std;
int fabo(int n){
    if(n<=1){
   return 1;
    }
    int ntfab=fabo(n-1)+fabo(n-2);
    return ntfab;
    cout<<ntfab<<endl;
}
int main(){
    int n=5;
    cout<<fabo(n)<<endl;
}