#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,2,1,1,3};
    int n=6;
    bool result=true;
    for(int i=0;i<n;i++){
        bool seen=false;
        int count1=0;
        for(int k=0;k<i;k++){
            if(arr[i]==arr[k]){
                seen=true;
            }
        }
        if(seen) continue;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
          count1++;
            }
        }
        
        for(int m=1+i;m<n;m++){
            if(arr[m]==arr[i]){
               continue; 
            }
            bool duplicate=false;
            for(int k=i+1;k<m;k++){
                if(arr[k]==arr[m]){
                    duplicate=true;
                }
            
            }
            if(duplicate) continue;
            int count2=0;
            for(int j=0;j<n;j++){
                if(arr[m]==arr[j]){
                    count2++;
                }
            }
            if(count1==count2){
                result=false;
            }
        }
        if(!result) break;
    }
    cout<<"the unique occurance is"<<result;
}