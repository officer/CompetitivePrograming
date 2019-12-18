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


int main(){
    int a,b;
    cin >> a >> b;
    if ( a > 9 || b > 9){
        cout << -1 << endl;
        return 0;
    }

    cout << a * b << endl;
}