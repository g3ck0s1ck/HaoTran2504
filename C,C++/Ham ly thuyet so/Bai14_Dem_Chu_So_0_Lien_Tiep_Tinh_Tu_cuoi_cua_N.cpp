#include <bits-stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >>n;
    long long ans=0;
    for (long long i = 5; i <=n; i*=5)
    {
        ans += n/i;
        ans %= (long long)(1e9+7);
    }
    cout<<ans<<endl;
    return 0;
}