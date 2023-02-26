#include<bits-stdc++.h>
using namespace std;
using long long ll;
int tong(int n){
    int sum =0;
    while(n!=0){
        sum+= n%10;
        n/=10;
    }
    return sum;
}
int check(int n){
    int sum1=tong(n);
    int tmp = n;
    int tong_uoc=0;
    for (int i = 2; i < sqrt(n); i++)
    {
        if(n%i==0){
            while(n%i==0){
                tong_uoc=tong(i);
                n/=i;
            }
        }
    }
    if(n==tmp) return 0;
        else if(n!=1) tong_uoc+= tong(n);  
    return tong_uoc==sum1;
}
int main(){
    ll n;
    cin>>n;
    if(check(n)){
        cout <<" YES"<<endl;
    }
    else cout <<" NO "<<endl;
}