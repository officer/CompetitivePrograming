#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <bitset>
#include <unordered_map>
#include <queue>
#include <deque>
#include <stack>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
typedef pair<int, int> p;

int main(){
    int N;
    vector< stack<int> > player_matches(N, stack<int>());
    queue< pair<int, int> > matches;

    int player;
    rep(i,N){
        rep(j,N-1){
            cin >> player;
            player_matches[i].push(player);
        }
    }
    



}