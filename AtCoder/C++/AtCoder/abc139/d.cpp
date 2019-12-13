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
typedef long long ll;


int main(){
    ll N;
    cin >> N;
    if (N==1){
        cout << 0 << endl;
        return 0;
    }
    cout << N * (N-1) / 2 << endl;
}