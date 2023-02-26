#include <bits-stdc++.h>
using namespace std;
#define ll long long;

ll nt(ll n){
    for (int i = 2; i < sqrt(n); i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}
ll a[40];
int n = 0;

void init(){
    for (int i = 0; i < 40; i++)
    {
        if(nt(i)){
            ll tmp= (int)pow(2,i)-1;
            if(nt(tmp)){
                a[n]=1ll*pow(2,i-1)*tmp;
                n++;
            }
        }
    }
}
int main(){
    init();
    ll s;
    cin>>s;
    int ok=0;
    for (int i = 0; i <40; i++)
    {
        if(s==a[i]){
            ok=1;
        }
    }
    if(ok==1){
        cout <<" YES "<<endl;
    }
    else 
        cout <<" NO "<<endl;
}