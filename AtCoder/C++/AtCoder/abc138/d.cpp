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

struct Node {
    vector<int> to;
    int score;
};

void dfs(int vertex, vector<Node> &nodes, int parent = -1){
    Node current = nodes[vertex];
    for(vector<int>::iterator i = nodes[vertex].to.begin(); i != nodes[vertex].to.end(); i++){
        if (*i == parent){
            continue;
        }
        nodes[*i].score += current.score;
        dfs(*i, nodes, vertex);
    }
}

int main(){
    int N,Q;
    int a,b;
    cin >> N >> Q;
    vector<Node> nodes(N);
    rep(i, N-1){
        cin >> a >> b;
        a--;
        b--;
        nodes[a].to.push_back(b);
        nodes[b].to.push_back(a);
    }
    rep(i, Q){
        cin >> a >> b;
        a--;
        nodes[a].score += b;
    }

    dfs(0, nodes);

    rep(i, N){
        cout << nodes[i].score << " ";
    }

}