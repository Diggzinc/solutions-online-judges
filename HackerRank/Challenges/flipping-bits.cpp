#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <bitset>

using namespace std;

//feels like cheating :P

int main() {
	bitset<32> nBits;
	int nCases;
	cin >> nCases;
	unsigned int n;
	while (nCases--) {
		cin >> n;
		nBits = bitset<32>(n);
		nBits.flip();
		cout << nBits.to_ullong() << endl;
	}
	return EXIT_SUCCESS;
}
