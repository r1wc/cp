#include <bits/stdc++.h>

using namespace std;

#define d double
#define ll long long
#define ld long double

void solve(string plrs) {
	int c = 1;
	char a;
	for (int i = 0; i < plrs.length(); i++) {
		if (plrs[i] == a) {
			c++;
		}
		if (plrs[i] != a && c < 7) {
			c = 1;
		}
		a = plrs[i];
	}

	if (c >= 7) {
		cout << "YES";
	} else {
		cout << "NO";
	}


}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string plrs;
	cin >> plrs;
	solve(plrs);
	
	return 0;
}