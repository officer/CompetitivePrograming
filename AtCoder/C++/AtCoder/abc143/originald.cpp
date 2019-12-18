#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <bitset>
#include <unordered_map>
#include <queue>
#include <stack>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repn(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

typedef long long ll;

int main(){
    int n;
    ll ans = 0;
    cin >> n;
    int sticks[n];
    rep(i,n){
        cin >> sticks[i];
    }
    sort(sticks, sticks+n);

    rep(i,n-2){
        repn(j,i+1,n-1){

            int target = sticks[i] + sticks[j];
            int index = lower_bound(sticks, sticks+n, target) - sticks;

            // Didn't find any triangle
            if( index == j ){
                continue;
            }
            // Find triangle.
            ans += index - j - 1;
        }
    }

    cout << ans << endl;
}