#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n;

void solve() {
	cin >> n;
	if (n % 2 == 0) {
		cout << n / 2;
	} else {
		cout << -(n + 1) / 2;
	}
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	solve();
	
	return 0;
}