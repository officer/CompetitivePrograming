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
    int N,R;
    
    cin >> N >> R;
    vector<int> points(N);
    rep(i,N){
        cin >> points[i];
    }

    int ans = 0, next = 0;
    auto pos = points.begin();
    while(pos != points.end()){
        next = *pos + R;
        pos = upper_bound(pos, points.end(), next) - 1;
        next = *pos + R;
        pos = upper_bound(pos, points.end(), next);
        ans++;
    }

    cout << ans << endl;


}