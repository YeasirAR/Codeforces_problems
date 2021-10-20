#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin >> str;
    for(int i=0; i<str.length()/2; i++){
        for(int i=2; i<str.length(); i=i+2){
            if(str[i]<str[i-2]){
                char ch = str[i];
                str[i] = str[i-2];
                str[i-2] = ch;
            }
        }
    }
    cout<<str;
    return 0;
}