#include<bits-stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    vector<pair<int, int>> v(t);
    for (int i = 1; i < t; i++)
    {
        cin >>v[i].first >> v[i].second;
    }
    long long cnt =1;
    for(int i =1;i<t;i++)
    {
        cnt = cnt * v[i].second+1;
        cnt = cnt % (int)1e9+7;
    }
    cout << cnt <<endl;
    
}