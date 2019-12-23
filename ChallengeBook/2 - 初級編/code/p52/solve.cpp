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

int main(){
    int n, W;
    cin >> n;
    vector< pair<int,int> > items(n);
    rep(i,n){
        int weight, value;
        cin >> weight >> value;
        items[i] = make_pair(weight, value);
    }
    cin >> W;
    int dp[n+1][W+1];
    memset(dp, 0, sizeof(dp));

    rep(j,W){
        rep(i,n){
            if(j + items[i].first <= W ){
                dp[i+1][j + items[i].first] = max(dp[i+1][j], dp[i][j] + items[i].second);
            }
            dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
        }
    }
    cout << dp[n][W] << endl;

}