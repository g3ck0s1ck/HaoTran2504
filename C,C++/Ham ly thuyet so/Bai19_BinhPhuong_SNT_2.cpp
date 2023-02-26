#include <bits-stdc++.h>
using namespace std;
using long long ll;
int check (int n ){
    int ok=0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0){
            int cnt=0;
            while(n%i==0){
                cnt ++;
                n/=i;
            }
            if(cnt==1) return 0;
            if(cnt>=2) ok=1
        }
    }
    if(n!=1) return 0;
    return ok;
    
}
int main(){
    int l,r;
    cin >>l >> r;
    for(int i=l;i <=r;i++){
        if(check(i)){
            cout << i << " ";
        }
    }
    return 0;
}