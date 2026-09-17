#include<iostream>
using namespace std;
void reverse(int arr[]){
    int i=0;
    int j=6;
    while(i!=j){
        swap(arr[i++],arr[j--]);
    }
}
int main(){
int num[]={1,2,3,4,5,6,7};
reverse(num);
cout<<"after reversing the array element"<<endl;
for(int i=0;i<7;i++){
    cout<<num[i]<<",";
}


}