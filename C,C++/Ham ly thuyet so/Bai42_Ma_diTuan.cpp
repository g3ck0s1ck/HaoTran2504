#include <bits-stdc++.h>
using namespace std;
#define ll long long;
int main(){
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ll ans = 1ll * i * i * (i * i - 1)/2 - 4 *(i-1)*(i-2);
        cout << ans << endl;
    }
    
}