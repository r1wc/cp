#include <bits/stdc++.h>

using namespace std;

#define d double
#define ll long long
#define ld long double

string lowercase(string s) {
    for (char &c : s)
        c = tolower(c);
    return s;
}

string remove_char(string s, char c) {

	string ns = "";
	for (int i = 0; i < s.length(); i++) {
		if (c != s[i]) {
			ns += s[i];
		}
	}

	return ns;
}

void solve(string s) {
	s = lowercase(s);
	string vowels = "aeiouy";
	string rs = "";
	for (int i = 0; i < 6; i++) {
		s = remove_char(s, vowels[i]);
	}
	string ns = "";
	int sl = s.length();
	for (int i = 0; i < sl; i++) {
		if (i != sl) {
			ns += '.';
		}
		ns += s[i];
	}

	cout << ns;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;

	solve(s);

	return 0;
}