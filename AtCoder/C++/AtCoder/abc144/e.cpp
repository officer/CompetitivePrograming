#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <bitset>
#include <unordered_map>
#include <queue>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repn(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

typedef long long ll;

int main(){
    ll n,k;
    cin >> n >> k;
    ll costs[n];
    ll foods[n];
    rep(i,n){
        cin >> costs[i];
    }

    rep(i,n){
        cin >> foods[i];
    }

    sort(costs, costs+n);
    sort(foods, foods+n);

    reverse(foods, foods+n);

    ll low = 0;
    ll high = 1000000000000;
    ll target;
    while(high > low){
        target = (high + low) / 2;
        ll cost = 0;
        rep(i,n){
            ll expected = target / foods[i];
            if( costs[i] > expected ){
                cost += costs[i] - expected;
            }
        }
        if(cost > k){
            low = ++target;
        } else{
            high = target;
        }
    }
    cout << target << endl;
    

}