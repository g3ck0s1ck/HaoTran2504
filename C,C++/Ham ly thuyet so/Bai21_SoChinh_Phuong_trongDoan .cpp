#include<bits-stdc++.h>
using namespace std;
int main(){
    long long l,r;
    cin>>l>>r;
    int trai =sqrt(l);
    int phai = sqrt(r);
    if(1ll*trai*trai!=l) ++trai;
    for (int i =trai; i <=phai ; i++)
    {
        cout<<1ll*i*i<<" ";
    }
}