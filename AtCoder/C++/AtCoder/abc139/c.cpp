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
#define repn(i, s, n) for (int i = (int)(s); i < (int)(n); i++)



int main(){

    int N;
    cin >> N;
    int current_height = 0, current_move = 0, ans = 0;


    vector<int> heights(N);
    rep(i,N){
        cin >> heights[i];
    }
    current_height = heights[0];

    repn(i,1,N){
        if( current_height >= heights[i]) {
            current_move++;
        }
        else{
            ans = max(ans, current_move);
            current_move = 0;
        }
        current_height = heights[i];
    }
    ans = max(ans, current_move);

    cout << ans << endl;

}