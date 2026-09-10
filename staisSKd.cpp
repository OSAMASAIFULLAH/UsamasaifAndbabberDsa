#include<iostream>
using namespace std;
int stair(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    int ways=stair(n-1)+stair(n-2);
    return ways;
}
int main(){
    int n=3;
    cout<<stair(n)<<endl;

}
