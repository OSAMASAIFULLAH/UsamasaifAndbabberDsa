#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
   return n*factorial(n-1);
}
int main(){
    int n=5;
    int r=2;
    int option=factorial(n)/((factorial(r)*factorial(n-r)));
    cout<<"the combination is"<<option<<endl;
}