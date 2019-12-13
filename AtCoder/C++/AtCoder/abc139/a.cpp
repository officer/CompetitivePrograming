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
    string s,t;
    cin >> s >> t;
    int ans = 0;
    rep(i,s.length()){
        if ( s[i] == t[i] ){
            ans++;
        }
    }
    cout << ans << endl;

}