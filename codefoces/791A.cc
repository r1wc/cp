#include <bits/stdc++.h>

using namespace std;

#define d double
#define ll long long
#define ld long double

void solve(int a, int b) {
	int y = 0;

	for (y; a <= b; y++) {
		a *= 3;
		b *= 2;
	}

	cout << y;

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b;
	cin >> a >> b;
	solve(a,b);
	return 0;
}