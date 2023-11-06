#include <bits/stdc++.h>

using namespace std;

#define d double
#define ll long long
#define ld long double

string tlc(string s) {        
    for(char &c : s)
        c = tolower(c);
    return s;
}

void solve(string s1, string s2) {
	string o = tlc(s1);
	string s = tlc(s2);
	cout << o.compare(s);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a,b;
	cin >> a >> b;
	solve(a, b);
	return 0;
}