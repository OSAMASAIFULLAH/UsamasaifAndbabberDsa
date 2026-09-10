#include<iostream>
using namespace std;
int fab(int n1,int n2,int nth){
    int next=0;
for(int i=1;i<nth;i++){
    next=n1+n2;
    n1=n2;
    n2=next;
    cout<<"the fabonacci series is "<<next<<endl;
}
return next;
}
int main(){
    int first=0;
    int second=1;
    int nth=5;
int result=fab(first,second,nth);
cout<<"the nth term of the fabonacci series is "<<result;

}