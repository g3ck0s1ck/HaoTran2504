#include<bits-stdc++.h>
using namespace std;

void pt(int n, int k){
    int cnt=0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0){
            while(n%i==0){
                ++cnt;
                if(cnt==k){
                    cout<<i<<endl;
                    break;
                }
                n/=i;
            }
        }
    }
    if(n!=1){
        ++cnt;
        if(cnt==k){
            cout<<n<<endl;
            returnl
        }
    }
    if(cnt<k){
        cout<<"-1"<<endl;
    }
}
int main(){
    int n,k;
    cin >> n >>k;
    pt(n,k);
}