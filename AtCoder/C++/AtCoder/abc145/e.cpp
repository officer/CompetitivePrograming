#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <bitset>
#include <unordered_map>
#include <queue>

using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int dp[3000][3000];

int main(){
    memset(dp, -1, sizeof(dp));
    int N,T;
    cin >> N >> T;
    int ans = 0;
    vector<pair<int,int> > dishes(N);
    rep(i,N){
        int a,b;
        cin >> a >> b;
        dishes[i] = make_pair(a, b);
    }

    memset(dp, 0, sizeof(dp));
    sort(dishes.begin(), dishes.end());

    

}