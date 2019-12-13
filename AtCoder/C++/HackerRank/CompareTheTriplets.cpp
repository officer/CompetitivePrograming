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

int main(){
    int alice = 0,bob = 0;
    vector<int> alice_point(3);
    vector<int> bob_point(3);

    rep(i,3){
        cin >> alice_point[i];
    }
    rep(i,3){
        cin >> bob_point[i];
    }
    rep(i,3){
        if(alice_point[i] > bob_point[i]){
            alice++;
        }else if(alice_point[i] < bob_point[i]){
            bob++;
        }
    }

    cout << alice << " " << bob << endl;;
}