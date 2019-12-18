#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <bitset>
#include <unordered_map>
#include <queue>
#include <climits>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repn(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

typedef long long ll;

int main(){
    ll n;
    ll ans = LLONG_MAX;
    cin >> n;
    for(ll i = 1;i*i <= n;i++){
        if( n%i == 0 ){
            ll divisor = n/i;
            ans = min(ans, divisor + i);
        }
    }
    cout << ans - 2 << endl;

}