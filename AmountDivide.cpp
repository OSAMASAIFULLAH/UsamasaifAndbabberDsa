#include<iostream>
using namespace std;
int main()
{
  int amount=1330;
int  price=100;
  cout<<"start"<<endl;
  switch (price)
  {
  case 100:
   cout<<"the amout of book price is 100 is "<<amount/100<<endl;
   amount=amount%100;  
    break;
  case 50:
   cout<<"the amout of book price is 50 is "<<amount/100<<endl;
   amount=amount%100;  
    break;
  case 20:
   cout<<"the amout of book price is 20 is "<<amount/100<<endl;
   amount=amount%100;  
    break;
  case 1:
   cout<<"the amout of book price is 1 is "<<amount/100<<endl;
   amount=amount%100;  
    break;

  }  
} 
