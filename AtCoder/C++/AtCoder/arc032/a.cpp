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



int main(){
    int n;
    cin >> n;
    if( n == 1 ) {
        cout << "BOWWOW" << endl;
        return 0;
    }
    if( n == 2 ){
        cout << "WANWAN" << endl;
        return 0;
    }
    int target = (n * (n+1)) / 2;
    if( target%2 == 0){
        cout << "BOWWOW" << endl;
        return 0; 
    }

    for(int i = 3; i*i <= target; i+=2){
        if(target%i == 0){
            cout << "BOWWOW" << endl;
            return 0;
        }
    }
    cout << "WANWAN" << endl;


}