#include<bits-stdc++.h>
using namespace std;
using long long ll;

ll check (ll n){
    ll res =0;
    for (int i = 2; i < sqrt(n); i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                res = i;
                n/=i;
            }
        }
    }
    if(n!=1) res =n;
    return res;
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin n;
        cout <<check(n)<<endl;
    }
}