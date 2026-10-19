#include<iostream>
#include<vector>
using namespace std;
vector<int> Sieve(int n){
   vector<bool> prime(n+1,true);
   for(int i=2;i*i<=n;i++){
    for(int p=i*i;p<=n;p+=i){
        prime[p]=false;
    }
   }
   vector<int> result;
   for(int j=2;j<=n;j++){
       if(prime[j]==true){
           result.push_back(j);
       }
   }
   return result;
}
int main(){
    int n= 20;
    vector<int> res=Sieve(n);
      for(auto ele : res){
        cout << ele << ' ';
    }


}