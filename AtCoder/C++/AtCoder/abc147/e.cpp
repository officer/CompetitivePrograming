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
const int D = 160 * 80 + 5;
const int D2 = D * 2;

int height_max, width_max;
int subtract[80][80];
bitset<D2> memo[80][80]; 

int main(){
    int ans = D;
    cin >> height_max >> width_max;

    rep(i,height_max){
        rep(j,width_max){
            cin >> subtract[i][j];
        }
    }
    rep(i,height_max){
        rep(j,width_max){
            int x;
            cin >> x;
            subtract[i][j] = abs(subtract[i][j] - x);
        }
    }
    memo[0][0][D+subtract[0][0]] = true;
    rep(i,height_max) rep(j,width_max) {
        if(i){
            memo[i][j] |= memo[i-1][j]<<subtract[i][j];
            memo[i][j] |= memo[i-1][j]>>subtract[i][j];
        }
        if(j){
            memo[i][j] |= memo[i][j-1]<<subtract[i][j];
            memo[i][j] |= memo[i][j-1]>>subtract[i][j];
        }
    }
    rep(i,D2){
        if(memo[height_max-1][width_max-1][i]){
            ans = min(ans, abs(i - D));
        }
    }
    cout << ans << endl;
}