#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;
#define rep(i,n) for(int i = 0;i<(int)(n);i++)
#define repn(i,s,n) for(int i = (int)(s);i<(int)(n);i++)

int main(){
    int n;

    cin >> n;
    int a[n];
    int INF = ~(1 << 31);
    int dp[n];
    fill(dp, dp+n, INF);
    rep(i,n){
        cin >> a[i];
    }
    rep(i,n){
        *lower_bound(dp, dp+i, a[i]) = a[i];
    }
    cout << lower_bound(dp, dp+n, INF) - dp << endl;
}