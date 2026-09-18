#include<iostream>
using namespace std;
string adjacentRemove(string s) {
    int i = 0;

    while (i < s.length() - 1) {

        if (s[i] == s[i + 1]) {
            s.erase(i, 2);

            if (i > 0) {
                i--;
            }
        }
        else {
            i++;
        }
    }

    return s;
}
int main(){
    string s="abbaca";
    cout<<"after removing the duplicate element"<<adjacentRemove(s)<<endl;
}