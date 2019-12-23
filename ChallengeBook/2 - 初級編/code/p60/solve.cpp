#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <iostream>
#include <map>
#include <deque>

using namespace std;
#define rep(i,n) for(int i = 0;i<(int)(n);i++)
#define repn(i,s,n) for(int i = (int)(s);i<(int)(n);i++)
#define chmax(x,y) x=max(x, y)

int main(){
    int n, w;
    cin >> n >> w;
    vector<pair<int,int>> items(n);

    // dp漸化式
    // dp[i+1][j] = i番目までの品物から価値がjになる様に選んだパターンでの最小の重さ
    int dp[n+1][n*100+1];
    memset(dp, INT32_MAX, sizeof(dp));

    rep(i,n){
        int w,v;
        cin >> w >> v;
        items[i] = make_pair(w,v);
    }

    rep(i,n) rep(i,n*100+1){
        
    }
}