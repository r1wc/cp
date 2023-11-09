#include <bits/stdc++.h>

using namespace std;

#define d double
#define ll long long
#define ld long double

void solve(int n, int k) {
	int i = 0;
	while (i < k) {
		if (n % 10 != 0) {
			n--;
			i++;
		} else {
			n /= 10;
			i++;
		}
	}
	cout << n;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,k;
	cin >> n >> k;
	solve(n,k);
	
	return 0;
}