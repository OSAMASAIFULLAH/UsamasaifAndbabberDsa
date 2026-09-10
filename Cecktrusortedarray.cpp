#include<iostream>
using namespace std;
int main(){
    int arr[]={4,3,1,2,3};
    int i=1;
    int count=0;
    bool check=false;
    while (i<5)
    {
        if(arr[i-1]<=arr[i]){
            i++;
        }
        else{
            count++;
            i++;
        }

    }
    if(count<=1){
        check=true;
    }
    cout<<count<<endl;
    cout<<"the checking of array is "<<check<<endl;
    
}

