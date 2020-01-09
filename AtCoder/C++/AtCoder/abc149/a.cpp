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

int main(){
    string s;
    cin >> s;
    int pos = s.find_first_of(" ");
    cout << s.substr(pos, s.length() - pos) + s.substr(0, pos) << endl;
}