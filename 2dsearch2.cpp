#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24}};
    int row=arr.size();
    int col=arr[0].size();
    int rowindex=0;
    int colindex=col-1;
    int target=9;
    while (rowindex<row&&colindex>=0)
    {
        int element=arr[rowindex][colindex];
        if(element==target){
            cout<<"element fount"<<rowindex<<colindex<<endl;
            return 0;
        }
        if(element<target){
            rowindex++;
        }
        else{
            colindex--;
        }
    }
    
}