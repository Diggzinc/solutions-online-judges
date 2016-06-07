#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#define N_FIVE_DIGITS 3
#define N_THREE_DIGITS 5

using namespace std;


int main() {
	int nCases, nCase, blocksOfFive, blocksOfTree, remainingDigitSpace;
	cin >> nCases;
	while (nCases--) {
		cin >> nCase;
		blocksOfFive = nCase / N_FIVE_DIGITS;
		remainingDigitSpace = nCase - (blocksOfFive * N_FIVE_DIGITS);
		while (remainingDigitSpace % N_THREE_DIGITS != 0 && blocksOfFive != 0) {
			blocksOfFive--;
			remainingDigitSpace += N_FIVE_DIGITS;
		}
		if (remainingDigitSpace % N_THREE_DIGITS != 0) {
			cout << "-1" << endl;
		}
		else {
			blocksOfTree = remainingDigitSpace / N_THREE_DIGITS;
			for (int i = 0; i < blocksOfFive;i++) {
				cout << "555";
			}
			for (int i = 0; i < blocksOfTree; i++) {
				cout << "33333";
			}
			cout << endl;
		}
	}
	return 0;
}