#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

#define ALPHABET_LENGTH 26

using namespace std;


int main() {
	char c;
	vector<bool> alphabet = vector<bool>(ALPHABET_LENGTH, false);
	while (cin >> c)
	{
		if (isalpha(c)) {
			int i = tolower(c)-'a';
			alphabet[i] = true;
		}
	}
	for (int i = 0; i < ALPHABET_LENGTH; i++)
	{
		if (!alphabet[i]) {
			cout << "not pangram" << endl;
			return EXIT_SUCCESS;
		}
	}
	cout << "pangram" << endl;
	return EXIT_SUCCESS;
}


