#include <bits/stdc++.h>

using namespace std;

#define d double
#define ll long long
#define ld long double

map<string, int> db;

void solve(int n) {
	while (n--) {
		string s;
		cin >> s;

		if (db.count(s) == 0) {
			cout << "OK" << "\n";
			db[s] = 1;
		} else {
			cout << s << db[s] << "\n";
			db[s] += 1;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	solve(n);
	
	return 0;
}