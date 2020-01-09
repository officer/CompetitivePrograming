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
    ll N;
    ll ans = 0;
    ll MOD = 998244353;
    cin >> N;
    vector<pair<int,int> > points(N);
    rep(i,N){
        int x,y;
        cin >> x >> y;
        points[i] = make_pair(x, y);
    }

    sort(points.begin(), points.end(), [](auto &left, auto &right){
        return left.second < right.second;
    });

    rep(i,N){
        points[i].second = i;
    }

    sort(points.begin(), points.end());

    rep(i,N){
        points[i].first = i;
    }

    







}