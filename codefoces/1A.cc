#include <bits/stdc++.h>

using namespace std;

#define d double
#define ll long long
#define ld long double

void solve(d n, d m, d a) {
	ll cn = ceil(n / a);
	ll cm = ceil(m / a);

	cout << cn * cm;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	d n,m,a;
	cin >> n >> m >> a;
	solve(n, m, a);
	
	return 0;
}
