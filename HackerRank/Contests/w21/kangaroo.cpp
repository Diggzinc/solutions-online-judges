#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
#include <bitset>

using namespace std;

bool isInt(double k) {
	return floor(abs(k)) == abs(k);
}


int main() {

	int x1, v1, x2, v2;
	cin >> x1 >> v1 >> x2 >> v2;

	double x = x1 - x2;
	double v = v2 - v1;

	if(v == 0 || x/v < 0 || !isInt(x / v)) {
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
	}

	return EXIT_SUCCESS;
}
