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
typedef unsigned long long ull;
typedef pair<ll,ll> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repn(i, n) for(int i = (int)(n-1); i > -1; i--)


ull MOD = 1000000007;

int main(){
    ll n, x ,d;
    cin >> n >> x >> d;
    ll ans = 0;
    if(d == 0){
        if( x == 0 ){
            cout << 0 << endl;
        }else{
            cout << n+1 << endl;
        }
    }
    map<ll, vector<P> > segments;
    rep(i,n+1){
        ll constant = x*i;
        ll lowest   = i*(i-1)/2;
        ll highest  = lowest + i * (n - i);
        lowest += constant/d;
        highest += constant/d;
        segments[( (constant%d)+d) % d].emplace_back(make_pair(lowest, highest));
    }

    for(auto p : segments){
        vector<P> points;
        vector<P> segment = p.second;
        for(auto point : segment){
            points.push_back(make_pair(point.first, 1));
            points.push_back(make_pair(point.second+1, -1));
        }
        sort(points.begin(), points.end());
        ll prev = INT32_MIN, count = 0;
        for(auto point : points){
            ll length = point.first - prev;
            if( count > 0) ans += length;
            prev = point.first;
            count += point.second;
        }
    }
    cout << ans << endl;


}