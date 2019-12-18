#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <bitset>
#include <unordered_map>
#include <queue>
#include <deque>
#include <stack>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
typedef pair<int, int> P;

int main(){
    int N;
    cin >> N;
    vector< stack<int> > player_matches(N, stack<int>());
    vector< pair<int, int> > matches;

    int player;

    // 入力を取得
    rep(i,N){
        rep(j,N-1){
            cin >> player;
            player_matches[i].push(player-1);
        }
    }

    // 現状誰が対戦出来るかを確認する。
    auto check = [&](int i) {
        if( player_matches[i].size() == 0 ){
            return;
        }
        int battler = player_matches[i].top();
       
        if( i == player_matches[battler].top()){
            P match = make_pair(i, battler);
            if ( match.first > match.second ) swap(match.first, match.second);
            matches.push_back(match);
        }

    };


    int days = 0;

    // ループで初回を処理するのが難しいため、初回は別に処理する。
    rep(i,N){
        check(i);
    }

    vector<pair<int,int>> next_candidates;

    // 1日ずつ大会を進める
    while(matches.size() > 0){// 対戦が無ければループを終わる
        // 1日進める
        days++;

        sort(matches.begin(), matches.end());
        matches.erase(unique(matches.begin(), matches.end()), matches.end());
        next_candidates = matches;

        // 対戦を処理する
        for(P match: next_candidates){
            player_matches[match.first].pop();
            player_matches[match.second].pop();
        }

        matches.erase(matches.begin(), matches.end());

        // 次に対戦可能なマッチを入れていく。
        for(P match: next_candidates ){
            check(match.first);
            check(match.second);
        }
        
    }

    // 全ての対戦可能な組み合わせが終わったにも関わらず、まだマッチが残っている場合には、消化できなかったということ。
    rep(i,N){
        if( player_matches[i].size() > 0 ){
            cout << "-1" << endl;
            return 0;
        }    
    }

    cout << days << endl;
}