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
    cin >> N;
    if( N%2 == 1){
        cout << 0 << endl;
        return 0;
    }

    N /= 2;
    while( N > 0){
        ans += (N /= 5);
    }
    cout << ans << endl;
}