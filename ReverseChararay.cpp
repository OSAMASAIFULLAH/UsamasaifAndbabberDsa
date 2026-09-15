#include<iostream>
using namespace std;
int main(){
    char name[]={'m','y',' ','n','a','m','e','\0'};
    int i=0;
    int j=6;
    while (i<j)
    {
       swap(name[i++],name[j--]);
    }
   cout<<name<<endl;
   
   int s = 0;
    int end = s;

    while (name[end] != '\0')
    {
        // Find the end of the current word
        while (name[end] != ' ' && name[end] != '\0')
        {
            end++;
        }

        // Reverse current word
        int j = end - 1;

        while (s < j)
        {
            swap(name[s], name[j]);
            s++;
            j--;
        }

        // Move to the next word
       
            s = end + 1;
            end=end+1;
        
    }
cout<<"the finel output is"<<name<<endl;
    
}