#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <bitset>
#include <unordered_map>
#include <queue>
#include <cmath>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

double calc_distance(pair<double, double> a, pair<double, double> b){
    double x = pow((a.first - b.first), 2);
    double y = pow((a.second - b.second), 2);
    return sqrt(x + y);
}

int main(){
    int N;
    cin >> N;
    vector<pair<double, double> > towns(N);
    rep(i,N){
        int x,y;
        cin >> x >> y;
        towns[i] = make_pair(x, y);
    }
    sort(towns.begin(), towns.end());
    double ans = 0;
    double count = 0;

    do{
        count++;
        rep(i,N-1){
            ans += calc_distance(towns[i], towns[i+1]);
        }
    } while(next_permutation(towns.begin(), towns.end()));
    printf("%.7f\n", ans/count);

}
