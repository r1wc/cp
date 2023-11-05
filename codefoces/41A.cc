#include <bits/stdc++.h>

using namespace std;

#define d double
#define ll long long
#define ld long double
string s, t;

void solve() {
	cin >> s >> t;
	reverse(t.begin(), t.end());
	if (s == t) {
		cout << "YES";
	} 
	else {
		cout << "NO";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
}