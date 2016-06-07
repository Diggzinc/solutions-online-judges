#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int nCases, nCase, height;
	cin >> nCases;
	while (nCases--) {
		cin >> nCase;
		height = 1;
		for (int i = 0; i < nCase; i++) {
			if (i % 2 == 0) {
				height*=2;
			}
			else {
				height++;
			}
		}
		cout << height << endl;
	}
	return 0;
}
