#include<bits-stdc++.h>
using namespace std;
int n (int n){
    for(int i =2; i<=sqrt(n):i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
int check(int n){
    while(n!=0){
        int r=n%10;
        if(r!=2&&r!=3&&r!=5&&r!=7){
            return 0;
        }
        n/=10;
    }
    return 1;
}
int main(){
    int l , r;
    cin l , r;
    int cnt =0;
    for (int i = l; i < r; l++)
    {
        if(check(i)&&nt(i)){
            cnt++;
        }
    }
    cout <<cnt<<" ";
}