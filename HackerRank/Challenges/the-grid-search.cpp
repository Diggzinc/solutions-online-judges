#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int** ReadGrid(int _j, int _i) {
	char v;
	int** input = new int*[_i];
	for (int i = 0; i < _i; i++) {
		input[i] = new int[_j];
		for (int j = 0; j < _j; j++) {
			cin >> v;
			input[i][j] = v - 48;
		}
	}
	return input;
}

string Evaluate(int** grid, int** pattern, int gI, int gJ, int pI, int pJ) {
	int boundI = gI - pI, boundJ = gJ - pJ;
	bool match;
	for (int i = 0; i <= boundI; i++) {
		for (int j = 0; j <= boundJ; j++) {
			
			match = true;

			for (int w = i; w < i + pI; w++) {
				for (int k = j; k < j + pJ; k++) {
					if (grid[w][k] != pattern[w - i][k - j]) {
						match = false;
						break;
					}
				}
				if (!match) {
					break;
				}
			}
			if (match) 
				return "YES";
		}
	}
	return "NO";
}

int main() {

	int nCases, gI, gJ, pI, pJ;
	cin >> nCases;
	while (nCases--) {

		cin >> gI >> gJ;
		int ** grid = ReadGrid(gJ, gI);
		cin >> pI >> pJ;
		int ** pattern = ReadGrid(pJ, pI);

		cout << Evaluate(grid, pattern, gI, gJ, pI, pJ) << endl;
	}
	return 0;
}