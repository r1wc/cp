#include <bits/stdc++.h>

using namespace std;

#define ll long long

int n;

void solve() {
	cin >> n;
	int r = 0;
	while (n--) {
		int a; cin >> a;
		if (a == 1) {
			r = 1;
			break;
		}
	}
	if (r == 1) {
		cout << "HARD";
	} else {
		cout << "EASY";
	}
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	solve();
	
	return 0;
}