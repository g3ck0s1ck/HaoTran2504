#include<bits-stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
return gcd(b,a%b);
}
int main(){
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        for(int j=i+1;j<=r;j++){
            if(gcd(i,j)==1){
                cout <<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}