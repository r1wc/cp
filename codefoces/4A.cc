#include <iostream>
#include <string>
#include <string>

using namespace std;

string watermelon(int w) {
	if (w > 2) {
		for (int i = 1; i < w; i++) {
			if ((w / i) % 2 == 0) {
				return "YES";
			} else {
				return "NO";
			}
		}
	}
	return "NO";
}

int main() {
	int w;
	cin >> w;
	cout << watermelon(w);
}