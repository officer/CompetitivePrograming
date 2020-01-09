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

bool isPrime(int n){
    if(n == 2 || n == 3){
        return true;
    }
    if( n%2 == 0){
        return false;
    }
    for(int i = 3; i*i <= n;i+=2){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    int x;
    cin >> x;
    int ans = x;
    while( !isPrime(ans)) ans++;
    cout << ans << endl;
}

