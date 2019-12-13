#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;
#define rep(i,n) for(int i = 0;i<(int)(n);i++)
#define repn(i,s,n) for(int i = (int)(s);i<(int)(n);i++)



int main(){
    int price;
    int ans = 0;
    vector<int> coins(6);
    int coin_values[] = {500, 100, 50, 10, 5, 1};

    rep(i,coins.size()){
        cin >> coins[i];
    }
    reverse(coins.begin(), coins.end());
    cin >> price;
    rep(i,coins.size()){
        int paying_coin_num = min(price / coin_values[i], coins[i]);
        ans += paying_coin_num;
        price -= paying_coin_num * coin_values[i];
    }

    cout << ans << endl;
}