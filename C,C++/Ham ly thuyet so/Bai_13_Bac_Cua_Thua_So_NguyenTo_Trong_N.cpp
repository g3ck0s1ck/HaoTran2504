#include<bits-stdc++.h>
using namespcae std;

long long solve(long long n,int p){
    long long x=0;
    for (long long i = p; i <= n; i*=p)
    {
        x+=n/i;
    }
    return x;
}
int main(){
    long long n;
    int p;
    cin>>n>>p;
    cout<<solve(n,p)<<endl;
    return 0;
}