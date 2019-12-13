#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <bitset>
#include <unordered_map>
#include <queue>
typedef long long ll;

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repn(i, start, n) for (int i = (int)(start); i < (int)(n); i++)
#define sz(x) int(x.size())

string alphabets = "abcdefghijklmnopqrstuvwxyz";

int main(int argc, char const *argv[])
{
    string s,t;
    cin >> s >> t;
    int n,m;
    n = sz(s), m = sz(t);
    vector<vector<int>> char_map(26);
    rep(i, n){
        char_map[s[i] - 'a'].push_back(i);
    }
    rep(i,n){
        char_map[s[i] - 'a'].push_back(i+n);
    }

    ll ans = 0;
    int p = 0;

    rep(i, m){
        int c = t[i] - 'a';
        if( char_map[c].size() == 0){
            cout << "-1" << endl;
            return 0;
        }
        p = *lower_bound(char_map[c].begin(), char_map[c].end(), p)+1;
        if( p >= n){
            p -= n;
            ans += n;
        }
    }

    ans += p;
    cout << ans << endl;
    return 0;
}