#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ispossible(vector<int>& stall, int n, int c, int mid)
{
    int cows = 1;
    int lastallowed = stall[0];

    for(int i = 1; i < n; i++)
    {
        if(stall[i] - lastallowed >= mid)
        {
            cows++;
            lastallowed = stall[i];
        }

        if(cows == c)
        {
            return true;
        }
    }

    return false;
}
int solve(vector<int>& stall,int n,int c ){
    sort(stall.begin(),stall.end());
    int s=1;
    int end=stall[n-1]-stall[0];
    int ans=-1;
    while(s<=end){
 int mid=(s+end)/2;
if(ispossible(stall,n,c,mid)){
   ans=mid;
   s=mid+1;
}
else{
    end=mid-1;
}
    }
return ans;
}
int main(){
    vector<int> stall={1,2,8,4,9};
    int n=5;
    int c=3;
    cout<<"the largest min distance is"<<solve(stall,n,c);
}
