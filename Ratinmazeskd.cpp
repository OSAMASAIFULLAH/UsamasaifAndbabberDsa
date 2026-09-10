#include<iostream>
#include<vector>
using namespace std;
bool ispossible(vector<vector<int>>& m,vector<vector<int>>& visited,int n,int x,int y){
    if((x>=0&&x<n)&&(y>=0&&y<n)&&(visited[x][y]==0)&&(m[x][y]==1)){
        return true;
    }
    else{
        return false;
    }
}
void solve(vector<vector<int>>& m,vector<vector<int>>& visited,string& path,vector<string> &ans,int n,int x,int y){
    
    if(x==n-1&&y==n-1){
       ans.push_back(path);
       return; 
    }
    visited[x][y]=1;
    //down
   int newx=x+1;
   int newy=y;
   if(ispossible(m,visited,n,newx,newy)){
    path.push_back('D');
    solve(m,visited,path,ans,n,newx,newy);
    path.pop_back();
   }
   //left
    newx=x;
    newy=y-1;
    if(ispossible(m,visited,n,newx,newy)){
    path.push_back('L');
    solve(m,visited,path,ans,n,newx,newy);
    path.pop_back();
   }
   //right
   newx=x;
   newy=y+1;
    if(ispossible(m,visited,n,newx,newy)){
    path.push_back('R');
    solve(m,visited,path,ans,n,newx,newy);
    path.pop_back();
   }
   //up
   newx=x-1;
   newy=y;
    if(ispossible(m,visited,n,newx,newy)){
    path.push_back('U');
    solve(m,visited,path,ans,n,newx,newy);
    path.pop_back();
   }
   visited[x][y]=0;
}
int main(){
    vector<vector<int>> m={  {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};
    vector<vector<int>> visited=m;
    string path="";
    vector<string> ans;
  int   n=m.size();
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        visited[i][j]=0;
    }
  }
  int srcx=0;
  int srcy=0;
  if(m[srcx][srcy]==0){
    cout<<"not any possible path";
  }
  else{
    
solve(m,visited,path,ans,n,srcx,srcy);
  }
  for(int k=0;k<ans.size();k++){
cout<<ans[k]<<",";
  }

}

