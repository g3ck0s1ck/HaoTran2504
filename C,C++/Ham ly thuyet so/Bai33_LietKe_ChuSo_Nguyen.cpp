#include<bits-stdc++.h>
using namespace std;
int nt(int n){
    if(n!=2&&n!=3&&n!=5&&n!=7){
        return 0;
    }
    return 1;
}
int main(){
    long long n;
    cin >> n;
    vector<int>v;
    map<int,int>mp;
    while(n!=0){
        int r=n%10;
        if(nt(r)){
            v.push_back(r);
            mp[r]++;
        }
        n/=10
    }
    for(auto it: mp){
        cout << it.first << " " << it.second <<endl;
    }  
    cout << endl;
    for(int i=v.size()-1;i>=0;i--){
        if(mp[v[i]!=0]){
            cout<< v[i] <<" "mp[v[i]]<<endl;
        }
        mp[v[i]]=0;
    }
}