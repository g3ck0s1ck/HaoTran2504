#include<bits-stdc++.h>
using namespace std;

int checknt1(int x){
    for(int i =2 i<sqrt(x);i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int checknt2(int x){
    int sum=0;
    while(!=0){
        int r = x%10;
        sum+= r;
        if(r!=2&& r!= 3&& r!= 5&&r!=7){
            return 0;
        }
        x!=10;
    }
    return checknt(sum);
}
int main(){
    int a,b;
    int cnt =0;
    cin>> a>>b;
    for (int i = a; i <= b; i++)
    {
        if(checknt2(i)&&checknt1(i)){
            cnt++;
        } 
    }
    cout<<cnt;
}