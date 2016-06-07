#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#define FLIP true
#define ADD false

using namespace std;

string GeneratePalindrome(string nCase) {
	int length = nCase.length();
	if (length == 1) { //EDGE CASE
		return "11";
	}
	int middle = length / 2;
	bool state = ADD;
	int rightShift = (length % 2 == 0) ? middle : middle + 1;
	for (int left = middle - 1, right = rightShift; right < length; left--, right++) {
		char leftChar = nCase[left], rightChar = nCase[right];
		if (leftChar > rightChar) {
			state = FLIP;
			break;
		}
		else if (leftChar < rightChar) {
			state = ADD;
			break;
		}
	}
	if (state == ADD) {
		int index = (length % 2 == 0) ? middle - 1 : middle;
		bool addUp = true;
		do {
			char c = nCase[index];
			if (c == '9') {
				nCase[index] = '0';
				index--;
			}
			else {
				nCase[index]++;
				addUp = false;
			}
		} while (addUp && index >= 0);
		if (addUp) {
			nCase = '1' + nCase;
			for (int i = middle; i < length; i++) {
				nCase[i] = '0';
			}
			nCase[length] = '1';
			return nCase;
		}
	}
	for (int left = middle - 1, right = rightShift; right < length; left--, right++) {
		nCase[right] = nCase[left];

	}
	return nCase;
}

int main() {

	int nCases;
	string nCase;
	cin >> nCases;
	do {
		cin >> nCase;
		cout << GeneratePalindrome(nCase) << endl;

	} while (--nCases);
	return EXIT_SUCCESS;
}