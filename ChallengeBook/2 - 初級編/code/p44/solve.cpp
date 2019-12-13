#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <iostream>
#include <map>
#include <deque>

using namespace std;
#define rep(i,n) for(int i = 0;i<(int)(n);i++)
#define repn(i,s,n) for(int i = (int)(s);i<(int)(n);i++)

int main(){
    string s,t = "";
    cin >> s;
    deque<char> chars;
    rep(i,s.size()){
        chars.push_back(s[i]);
    }
    while(chars.size() > 1){
        char front = chars.front(), end = chars.back();

        // 先頭か、最後の文字列のどちらかが辞書順で若いかを調べる。
        if( front > end ) {
            t += end;
            chars.pop_back();
        }else if( end > front){
            t += front;
            chars.pop_front();
        } else{
            // もしどちらも同じであれば、先頭、最後から一つ進んだ文字列を調べる。
            if(chars.size() < 4){
                // 3文字以下であればどちらを取ろうがもはや変わりないので先頭を取る。
                t += front;
                chars.pop_front();
            }else{
                //　次点の文字列が辞書順に若い方を取る。
                if( chars.at(1) >= chars.at(chars.size() - 2)){
                    t += end;
                    chars.pop_back();
                } else{
                    t += front;
                    chars.pop_front();                    
                }
            }
        }
    }
    t += chars.front();
    cout << t << endl;
}