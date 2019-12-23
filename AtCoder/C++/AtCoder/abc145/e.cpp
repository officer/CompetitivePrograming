#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <bitset>
#include <unordered_map>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main(){
    int N,T;
    cin >> N >> T;
    int ans = 0;
    int dp[N+1][T];
    vector<pair<int,int> > dishes(N);
    rep(i,N){
        int a,b;
        cin >> a >> b;
        dishes[i] = make_pair(a, b);
    }

    sort(dishes.begin(), dishes.end());
    memset(dp, 0, sizeof(dp));
    rep(i,N-1){
        rep(j,T){
            dp[i+1][j] = max(dp[i][j], dp[i+1][j]);
            int nextj = j+dishes[i].first;
            if( T > nextj ){
                dp[i+1][nextj] = max(dp[i][j] + dishes[i].second, dp[i][nextj]);
            }
        }
        ans = max(ans, dp[i+1][T-1] + dishes[i+1].second);
    }
    cout << ans << endl;

}