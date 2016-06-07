#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int nCases, lowerBound, upperBound, totalSquares;
	cin >> nCases;
	while (nCases--) {
		cin >> lowerBound >> upperBound;
		totalSquares = (int)(floor(sqrt(upperBound)) - ceil(sqrt(lowerBound)) + 1);
		cout << totalSquares << endl;
	}
	return 0;
}