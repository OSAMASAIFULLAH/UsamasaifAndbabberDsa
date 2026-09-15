#include<iostream>
using namespace std;
void Reverse(char name[],int size){
    int i=0;
    int j=size-1;
    while (i<j)
    {
        swap(name[i],name[j]);
        i++;
        j--;

    }
    
}
int Length(char name[]){
    int count=0;
    while (name[count]!='\0')
    {
        count++;
    }
  return count;  
}
bool Palandrom(char name[]){
    int i=0;
    int j=Length(name)-1;
    while (i<j)
    {
        
      if(!((name[i]>='a'&&name[i]<='z')||(name[i]>='0'&&name[i]<='9'))){
        i++;
        continue;
      }
      if(!((name[j]>='a'&&name[j]<='z')||(name[j]>='0'&&name[j]<='9'))){
        j--;
        continue;
      }
      if(name[i]!=name[j]){
        return false;
      }
      i++;
      j--;
    }
   return true; 
}
void convertinSmall(char name[]){
    
    for(int i=0;i<Length(name);i++){
        if((name[i]>='A')&&(name[i]<='Z')){
        name[i] = (name[i] - 'A') + 'a';
        }
    }
    cout<<"the name is function is"<<name<<endl;
}

int main(){
    char name[]="321Madam@123";
    // cout<<"the length of a string is"<<" "<<Length(name)<<endl;
    // Reverse(name,Length(name));
    // cout<<"the reverse of a string is"<<" "<<name<<endl;
    // cout<<"the name is palaldrom or not is"<<" "<<Palandrom(name)<<endl;
    convertinSmall(name);
    cout<<"the case name is"<<Palandrom(name)<<endl;
}