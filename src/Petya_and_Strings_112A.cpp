#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1;
    string str2;
    cin >> str1 >> str2;
    for(int i=0; i<str1.length(); i++){
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);
    }
    cout<<str1.compare(str2);
    return 0;
}
