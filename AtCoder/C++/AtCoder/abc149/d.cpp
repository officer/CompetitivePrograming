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
typedef pair<ll,ll> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repn(i, n) for(int i = (int)(n-1); i > -1; i--)


ull MOD = 1000000007;


int calculateScore(char hand, const int *scores){
    switch(hand){
        case 's':
        return scores[0];
        
        case 'p':
        return scores[1];

        default:
        return scores[2];
    }
}

int battle(char expectedHand, char previousHand, const int *scores){
    if( expectedHand == previousHand){
        return 0;
    }
    return calculateScore(expectedHand, scores);
}


int main(){
    int n,k;
    int scores[3];
    ll ans = 0;
    string t;
    cin >> n >> k;
    rep(i,3){
        cin >> scores[i];
    }
    cin >> t;
    char memo[n];
    memset(memo, 0, sizeof(memo));
    rep(i,n){
        if(i < k){
            memo[i] = t[i];
            ans += calculateScore(t[i], scores);
            continue;
        }
        ll score = battle(t[i], memo[i-k], scores);
        if( score == 0 ) continue;
        memo[i] = t[i];
        ans += score; 
    }

    cout << ans << endl;
}

