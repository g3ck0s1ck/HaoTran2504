#include <bits-stdc++.h>
using namespace std;

int check(long long n){
    int can = sqrt(n);
    if(n==1ll*can*can){
        return 1;
    }
    else return 0;
}
int main(){
    int n;
    cin >> n;
    if(check(n)){
        cout << "YES "<<endl;
    }
    else cout << "NO"<<endl;
}