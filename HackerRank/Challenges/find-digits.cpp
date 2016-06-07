#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int nCases, nCase, buffer, digit, divisors;
	cin >> nCases;
	while (nCases--) {
		cin >> nCase;
		buffer = nCase;
		divisors = 0;
		do {
			digit = buffer % 10;
			divisors += digit == 0 ? 0 : nCase % digit == 0 ? 1 : 0;
			buffer /= 10;
		} while (buffer != 0);
		cout << divisors << endl;
	}
	return 0;
}
