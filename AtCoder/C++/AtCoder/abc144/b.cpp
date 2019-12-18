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
    int n;
    cin >> n;

    repn (i,1,10){
        if(n % i == 0 && n/i < 10){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}