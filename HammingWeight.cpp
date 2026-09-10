#include<iostream>
using namespace std;
int bit(int n){
    int count=0;
    while(n>0){
      
        if(n & 1){
            count++;
        }
       n= n>>1;
    }
    return count;
}
// int bit(int n){
//     int count = 0;

//     while(n > 0){

//         if(n & 1){
//             cout << "1 ";
//             count++;
//         }

//         n = n >> 1;
//     }

//     return count;
// }
int main(){
   int n;
   cout<<"enter the number "<<endl;
   cin>>n;
   cout<<bit(n);


}