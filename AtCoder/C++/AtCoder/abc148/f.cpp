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


void dfs(int parent, int current, const vector<vector<int> >& nodes, int distances[], int distance = 0){
    distances[current] = distance;
    for(int to : nodes[current]){
        if( to == parent ){
            continue;
        }
        dfs(current, to, nodes, distances, distance+1);
    }
}

int main(){
    int N, u, v;
    vector<vector<int>> nodes;
    cin >> N >> u >> v;
    u--;
    v--;
    nodes.resize(N);
    
    rep(i, N-1){
        int from, to;
        cin >> from >> to;
        from--;
        to--;
        nodes[from].push_back(to);
        nodes[to].push_back(from);
    }
    int distance_from_aoki[N], distance_from_takahashi[N];
    dfs(-1, u, nodes, distance_from_takahashi);
    dfs(-1, v, nodes, distance_from_aoki);

    int ans = 0;
    rep(i,N){
        if( distance_from_takahashi[i] < distance_from_aoki[i] ){
            ans = max(ans, distance_from_aoki[i] - 1);
        }
    }

    cout << ans << endl;

}