#include<iostream>
#include<algorithm>
using namespace std;
string binary(int n){
    string bin="";
    int b;
    while(n>0){
        b=n%2;
        n=n/2;
        bin.push_back(b+'0');

    }
    reverse(bin.begin(), bin.end());
    return bin;
}
int main(){
   int n=13;
   cout<<binary(n)<<endl;
}