#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;
#define rep(i,n) for(int i = 0;i<(int)(n);i++)
#define repn(i,s,n) for(int i = (int)(s);i<(int)(n);i++)



int main(){
    int num_works;
    vector<int> starts, ends;
    map<int, int> works;
    cin >> num_works;
    starts.resize(num_works);
    ends.resize(num_works);

    rep(i,starts.size()){
        cin >> starts[i];
    }

    rep(i,ends.size()){
        cin >> ends[i];
    }

    rep(i,ends.size()){
        works.insert(make_pair(ends[i], starts[i]));
    }

    int current = 0, ans = 0;
    for(auto i = works.begin();i!=works.end();i++){
        if(current < i->second){
            ans++;
            current = i->first;
        }
    }
    cout << ans << endl;
}