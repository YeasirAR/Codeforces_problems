#include <iostream>
using namespace std;

int main(){
    int n,one[1000],two[1000],three[1000];
    int sum_x=0,sum_y=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>one[i]>>two[i]>>three[i];
        two[i]=two[i];
        three[i]=three[i];
        sum_x = (three[i]/2)*3;
        sum_y = (three[i]-(three[i]/2))*3;
        sum_x = sum_x + (two[i]-(two[i]/2))*2;
        sum_y = sum_y+ (two[i]/2)*2;
        int dif = abs(sum_x-sum_y);
        while(one[i]!=0){
            if(sum_x>sum_y){
                sum_y = sum_y+1;
                one[i]=one[i]-1;
            }
            else{
                sum_x = sum_x+1;
                one[i]=one[i]-1;
            }
            if(one[i]!=0){
                if(sum_x>sum_y){
                sum_y = sum_y+1;
                one[i]=one[i]-1;
                }
                else{
                sum_x = sum_x+1;
                one[i]=one[i]-1;
                }
            }
        }

        cout<<abs(sum_x-sum_y)<<endl;
        sum_x=0;
        sum_y=0;
    }
    return 0;
}