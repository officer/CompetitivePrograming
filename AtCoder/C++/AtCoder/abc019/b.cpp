#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <bitset>
#include <unordered_map>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <cmath>
#include <sstream>

using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string convertCharacter(string target){
	char currentCharacter = target[0];
	int count = 1;
	int size = target.length();
	string answer = "";
    ostringstream ss;
	
	for( int i = 1; i < size;i++){
		if( currentCharacter == target[i]){
			count++;
		}else{
			ss << currentCharacter << count;
			answer += count;
			currentCharacter = target[i];
			count = 1;
		}
	}
    ss << currentCharacter << count;
	return ss.str();
}


int main(){
    string s;
    cin >> s;
    string t = convertCharacter(s);
    cout << t << endl;
}