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
    int MAX_K = 100000;
    int n,K;
    vector<int> a,m;
    cin >> n >> K;
    rep(i,n){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    rep(i,n){
        int temp;
        cin >> temp;
        m.push_back(temp);
    }

    int dp[MAX_K+1];
    memset(dp, -1, sizeof(dp));
    dp[0] = 0;

    rep(i,n){
        repn(j,1,MAX_K){
            if(dp[j] >= 0){
                dp[j + a[i]] = m[i];
            }else if( j < a[i] || dp[j - a[i]] <= 0){
                dp[j] = -1;
            }else{
                dp[j] = dp[j - a[i]] - 1;
            }
        }
    }
    if(dp[K] >= 0){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }

}