#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define IS_CAVITY (grid[i][j] > grid[i+1][j] && grid[i][j] > grid[i-1][j] && grid[i][j] > grid[i][j+1] && grid[i][j] > grid[i][j-1])
#define IS_EDGE (i == 0 || i == n-1 || j == 0 || j == n-1)

int main() {
	int n, **grid, cavaties = 0;
	char c;

	cin >> n;
	grid = new int*[n];

	for (int i = 0; i<n; i++) {
		grid[i] = new int[n];
		for (int j = 0; j<n; j++) {
			cin >> c;
			grid[i][j] = c - 48;
		}
	}

	for (int i = 0; i<n; i++) {
		for (int j = 0; j<n; j++) {
			if (!IS_EDGE && IS_CAVITY) {
				cout << 'X';
			}
			else {
				cout << grid[i][j];
			}
		}
		cout << endl;
	}

	return 0;
}
