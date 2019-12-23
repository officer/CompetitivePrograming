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
    
    int n,m;
    string a,b;
    cin >> n >> m >> a >> b;
    int dp[n+1][m+1];
    memset(dp, 0, sizeof(dp));
    
    rep(i,n) rep(j,m){
        if(a[i] == b[j]){
            dp[i+1][j+1] = max(dp[i][j], dp[i][j] + 1);
        }else{
            dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
        }
    }
    cout << dp[n][m] << endl;;
}