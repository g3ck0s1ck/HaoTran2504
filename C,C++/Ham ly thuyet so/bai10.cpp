#include<bits/stdc++.h>
using namespace std;
int pr[1000001];
void init(){
    for(int i=0;i<1000001;i++){
        pr[i]=1;
    }
    pr[0]=pr[1]=0;
    for(int i=2;i<sqrt(1000001);i++){
        if(pr[i]==1){
            for(int j=i*i;j<1000001;j+=i){
                pr[j]=0;
            }
        }
    }
}
int main(){
    init();
    long long n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=sqrt(n);i++){
        if(pr[i]){
            ++cnt;
        }
    }
    cout<<cnt<<endl;
}