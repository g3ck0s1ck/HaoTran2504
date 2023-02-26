#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int a[1005][1005];
int pre[1005][1005];
int n, m;


int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + a[i][j];
        }
    }
    int q; cin >> q;
    while(q--){
        int x1, x2, y1, y2; cin >> x1 >> x2 >> y1 >> y2;
        cout << pre[x2][y2] - pre[x1 - 1][y2] - pre[x2][y1 - 1] + pre[x1 - 1][y1 - 1] << endl;
    }
}
