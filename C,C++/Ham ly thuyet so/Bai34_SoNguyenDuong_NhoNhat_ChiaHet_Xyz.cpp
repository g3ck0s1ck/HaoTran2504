#include <bits-stdc++.h>
using namespace std;
#define Ll llong long
ll gcd(ll a,ll b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
ll lcm(ll a,ll b){
    return a/gcd(a,b)*b;
}
ll solve(int x,int y,int z,int n){
     ll bcnn = lcm(lcm(x,y),y);
     ll min =(ll)pow(10,n-1);
     ll res =(min+bcnn-1)/bcnn*bcnn;
     if(res<pow(10,n))){
        return res;
     }
     else return -1;
}
int main(){
     int n,x,y,z;
     cin >> x >> y >> z >> n;
     cout << solve(x,y,z,n) << endl;
}