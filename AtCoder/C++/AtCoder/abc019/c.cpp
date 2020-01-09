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
    ll N;
    cin >> N;
    set<int> numbers;
    rep(i,N){
        ll temp;
        cin >> temp;
        while( temp %2 == 0 ) temp/=2;
        numbers.insert(temp);
    }
    cout << numbers.size() << endl;

}