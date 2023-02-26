#include <bits-stdc++.h>
using namespace std;
#define ll long long;
ll dgree(int x,int n){
    ll res=0;
    for (int i = x; i <= n; i*=x)
    {
        res += n/i;
    }
    return res;
}
int nt(int n){
    for (int i = 2; i < sqrt(n); i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}
int dem(int n){
    ll ans=1;
    for (int i = 2; i <= n; i++)
    {
        if(nt(i)){
            ans=1ll*ans*(dgree(i,n)+1);
            ans %= 1ll * ans * (dgree(i,n));
        }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    cout << dem(n);
}