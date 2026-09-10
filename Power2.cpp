#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n=8;
  for(int i=0;i<32;i++){
      if(n==pow(2,i)){
          cout<<"the number is a power of 2";
          return 0;
      }

    
  }
  cout<<"the number is not a power of 2";
}