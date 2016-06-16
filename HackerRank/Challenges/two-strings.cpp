#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <bitset>

using namespace std;

int main() {
	int nCases;
	cin >> nCases;
	string a, b;
	char c;
	while (nCases--) {
		vector<bool> chars = vector<bool>(300, false);
		bool isSubStr = false;
		cin >> a >> b;
		for (int i = 0; i < a.size();i++){
			c = a[i];
			chars[c] = true;
		}
		for (int i = 0; i < b.size(); i++) {
			c = b[i];
			if (chars[c]) {
				isSubStr = true;
				break;
			}
		}
		cout << (isSubStr ? "YES" : "NO") << endl;
	}
	return EXIT_SUCCESS;
}
