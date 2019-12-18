#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <bitset>
#include <unordered_map>
#include <queue>
#include <stack>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repn(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

typedef long long ll;
int main(){
    int n;
    string s;
    stack<char> slime;
    cin >> n >> s;
    slime.push(s[0]);
    repn(i,1,n){
        if( slime.top() == s[i]){
            continue;
        }
        slime.push(s[i]);
    }

    cout << slime.size() << endl;
    
}