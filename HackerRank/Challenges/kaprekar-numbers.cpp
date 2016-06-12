#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

#define MAX_DIGITS 11

int main() {
	int lowerBound, upperBound, digits, digit, left, right;
	long long square;
	char buffer[MAX_DIGITS];
	vector<int> kaprekarNumbers = vector<int>();

	cin >> lowerBound >> upperBound;

	for (long long i = lowerBound; i <= upperBound; i++) {

		square = i * i;
		sprintf(buffer, "%d", i);
		digits = strlen(buffer);
		right = left = 0;

		for (int j = 0; square; j++, square /= 10)
		{
			digit = square % 10;
			if (j < digits) {
				right += pow(10, j) * digit;
			}
			else {
				left += pow(10, j - digits) * digit;
			}
		}

		if (left + right == i) {
			kaprekarNumbers.push_back(i);
		}
	}
	if (kaprekarNumbers.size()) {
		for (int i = 0; i < kaprekarNumbers.size(); i++)
		{
			cout << kaprekarNumbers[i] << " ";
		}
		cout << endl;
	}
	else {
		cout << "INVALID RANGE" << endl;
	}
	return EXIT_SUCCESS;
}
