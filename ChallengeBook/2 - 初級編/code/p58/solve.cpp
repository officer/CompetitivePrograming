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
    int n, W;
    cin >> n >> W;
    vector< pair<int,int> > items(n);
    rep(i,n){
        int weight, value;
        cin >> weight >> value;
        items[i] = make_pair(weight, value);
    }
    // dp漸化式
    // dp[i+1][j] = i番目の品物までを使った場合に、j以下の重さで達成出来る最高の価値
    int dp[n+1][W+1];
    memset(dp, 0, sizeof(dp));

    rep(i,n) rep(j,W+1) {
        // 選ばないパターン
        chmax(dp[i+1][j], dp[i][j]);

        // 選ぶパターン
        int newWeight = j + items[i].first;
        if( W >= newWeight){ // 重さがWを超えていないかを確認。

            // 今回は何回でも商品を選べるため、複数回選ぶケースを考える必要がある。

            // もう一度選ぶかどうかを考えるパターン
            chmax(dp[i][newWeight], dp[i][j] + items[i].second);

            // 今回で打ち止めにするパターン
            chmax(dp[i+1][newWeight], dp[i][j] + items[i].second);

        }
    }

    cout << dp[n][W] << endl;;
}