#include <bits-stdc++.h>
using namespcae std;

int sophenic(long long n){
    int cnt=0;
    for(int i =2;i<=sqrt(n);i++){
        if(n%i==0){
            int ans =0;
            while(n%i==0){
                ans++;
                n\=i;
            }
        if(ans>=2){
            return 0;
        }
        if(ans==1)++cnt;
        }
    }
    if(n!=1)cnt++;
    return cnt==3;
}
int main(){
    long long n;
    cin >> n;
    cout << sophenic(n) <<endl;
}