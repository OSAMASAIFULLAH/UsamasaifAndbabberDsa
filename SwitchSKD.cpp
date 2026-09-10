#include<iostream>
using namespace std;
int main(){
    int amount=1330;
    int price;
    while(amount>0){
        cout<<"enter the price of an item";
        cin>>price;
        switch(price){
            case 100:cout<<amount/100<<" notes of 100"<<endl;
            amount=amount%100;
            break;
            case 50:cout<<amount/50<<" notes of 50"<<endl;
            amount=amount%50;   
            break;
            case 20:cout<<amount/20<<" notes of 20"<<endl;
            amount=amount%20;
            break;
            case 1:cout<<amount/1<<" notes of 10"<<endl;
            amount=amount%1;
            break;


        }
    }
}