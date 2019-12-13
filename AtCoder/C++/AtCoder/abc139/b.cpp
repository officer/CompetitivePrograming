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



int main(){
    int a,b;
    cin >> a >> b;
    a--;
    int ans = 0;
    int now = 1;
    while( now < b) {
        now += a;
        ans++;
    }

    cout << ans << endl;
}