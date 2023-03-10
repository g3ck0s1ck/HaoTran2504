#include <bits-stdc++.h>
using namespace std;
int pr[10000001];
void init(){
    for (int i = 0; i <10000001 ; i++)
    {
        pr[i]=1;
    }
    pr[0]=pr[1]=0;
    for (int i = 2; i < sqrt(10000001); i++)
    {
        if(pr[i]==1){
            for (int j = i*i; j < 10000001; j+=i)
            {
                pr[j]=0;
            }
        }
    }
}
int check(int n){
    int r=n%10;
    n/=10;
    while(n!=0){
        if(n%10>r)
        return 0;
        n/=10;
    }
    return 1;
}
int main(){
    init();
    int n;
    cin>>n;
    int cnt=0;
    for (int i = 0; i <= n; i++)
    {
        if(pr[i]&&check(i)){
            cnt++;
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<cnt<<endl;
}