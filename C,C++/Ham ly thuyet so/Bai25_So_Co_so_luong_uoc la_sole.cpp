#include<bits-stdc++.h>
using namespace std;
int cp(long long n){
    int a=sqrt(n);
    if(1ll*a*a==n){
        return 1;
    }
    else return 0;
}
int main(){
    long long n;
    cin >> n;
    if(cp(n)){
        cout <<"Yes"<<endl;
    }
    else cout <<"No" <<endl;
    
}