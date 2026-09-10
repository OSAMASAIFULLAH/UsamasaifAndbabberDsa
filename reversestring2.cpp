#include<iostream>
using namespace std;
string reverse(string name,int s,int end){
	if(s>end){
		return name;
	}
	swap(name[s],name[end]);
	return reverse(name,s+1,end-1);
}
int main(){
	string name="aabbaa";
    int	end=name.length()-1;
    int s=0;
    string retreverse=reverse(name,s,end);
    if(retreverse==name){
    	cout<<"the string is plandrom";
	}
	else{
		cout<<"the string is not plandrom";
	}
    	
}
