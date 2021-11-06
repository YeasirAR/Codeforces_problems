#include <iostream>
using namespace std;

int main() {
    char str[1000];
    cin>>str;
    if(str[0]>=97 && str[0]<=122){
        str[0]-=32;
    }
    cout<<str;
    return 0;
}
