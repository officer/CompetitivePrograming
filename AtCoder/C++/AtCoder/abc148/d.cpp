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
    int N;
    cin >> N;
    int bricks[N];

    rep(i,N){
        cin >> bricks[i];
    }
    int current = 1;
    int breaks = 0;
    rep(i,N){
        if( bricks[i] == current) {
            current++;
        }else{
            breaks++;
        }
    }

    if( current == 1){
        cout << -1 << endl;
    }else{
        cout << breaks << endl;
    }
}