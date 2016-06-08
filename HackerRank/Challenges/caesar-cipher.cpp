#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define IS_LOWERCASE(c) (c >= 'a' && c <= 'z')
#define IS_UPPERCASE(c) (c >= 'A' && c <= 'Z')
#define FULL_ALPHABET_ROTATION 26

int main() {
	int nChars, rotation;
	cin >> nChars;
	char* str = new char[nChars];
	for (int i = 0; i < nChars; i++)
	{
		cin >> str[i];
	}
	cin >> rotation;

	while (rotation >= FULL_ALPHABET_ROTATION) {
		rotation -= FULL_ALPHABET_ROTATION;
	}

	for (int i = 0; i < nChars; i++)
	{

		if ( IS_LOWERCASE(str[i]) ) {
			if (str[i] + rotation <= 'z') {
				str[i] = str[i] + rotation;
			}
			else {
				str[i] = 'a' + (str[i] + rotation - 1) - 'z';
			}
		}
		else if( IS_UPPERCASE(str[i]) ) {
			if (str[i] + rotation <= 'Z') {
				str[i] = str[i] + rotation;
			}
			else {
				str[i] = 'A' + (str[i] + rotation - 1) - 'Z';
			}
		}
		cout << str[i];
		
	}
	cout << endl;
	return 0;
}
