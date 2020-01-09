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
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repn(i, n) for(int i = (int)(n-1); i > -1; i--)

ull MOD = 1000000007;

int main(){
    int N;
    cin >> N;
    ull ans = 0;
    vector<ull> numbers(N);
    rep(i,N){
        cin >> numbers[i];
    }

    rep(i,60){
        ll count = 0;
        rep(j,N) if( numbers[j] >> i & 1 ) count++;
        ll plus = count * (N-count) % MOD;
        rep(j,i) plus = plus * 2 % MOD;
        ans += plus;
        ans %= MOD;
    }

    cout << ans << endl;
}