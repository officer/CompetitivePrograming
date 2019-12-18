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
    int N;
    string S;
    cin >> N >> S;
    if( S.length() %2 == 1){
        cout << "No" << endl;
        return 0;
    }

    int half = S.length() / 2;
    rep(i,half){
        if( S[i] != S[i+half]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}