#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <bitset>
#include <unordered_map>
#include <queue>
#include <climits>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repn(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

typedef long long ll;

int main(){
    double length,height,x;
    cin >> length >> height >> x;
    double bottom = x/height;
    printf("%.7f\n", atan(height/bottom) * 180/ M_PI);
    

}