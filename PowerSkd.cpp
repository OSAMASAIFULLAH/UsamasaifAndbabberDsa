#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0){
        return 1;
    }
    int r=power(a,b/2);
    if(b%2==0){
        r=r*r;
    }
    else{
        r=a*r*r;
    }
    return r;
}
int main(){
    int a=2,b=3;
    int result=power(a,b);
    cout<<"power is"<<endl;
    cout<<result;

}