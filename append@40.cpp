#include<iostream>
using namespace std;
int main()
{
    string s="my name is khan";
    int i=0;
    while (i<s.length())
    {
        if(s[i]==' '){
          s.replace(i,1,"@40");
          i+=3;
        }
        i++;
    }
    cout<<s<<endl;
    
    
} 

