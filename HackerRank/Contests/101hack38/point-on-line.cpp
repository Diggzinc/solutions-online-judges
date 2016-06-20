#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int n, x1, y1, x2, y2;
	bool pX, pY;
	pX = pY = true;
	cin >> n;
	cin >> x1 >> y1;
	while (--n) {
		cin >> x2 >> y2;
		if (x1^x2) {
			pX = false;
		}
		if (y1^y2) {
			pY = false;
		}
		x1 = x2;
		y1 = y2;
	}
	cout << (pX || pY ? "YES" : "NO") << endl;
	return EXIT_SUCCESS;
}
