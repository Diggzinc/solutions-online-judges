#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <iostream>
#include <algorithm>

#define uint unsigned int
#define lint long int
#define llint long long int

using namespace std;

#define MAX 50001

int main() {

	llint nCases, n, p, m, prices[MAX], profit = 0;
	cin >> nCases;
	while (nCases--) {
		cin >> n;
		profit = m = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> p;
			prices[i] = p;
		}
		for (int i = n - 1; i >= 0; i--)
		{
			if (prices[i] >= m) {
				m = prices[i];
			}
			profit += m - prices[i];
		}
		cout << profit << endl;
	}
	return EXIT_SUCCESS;
}