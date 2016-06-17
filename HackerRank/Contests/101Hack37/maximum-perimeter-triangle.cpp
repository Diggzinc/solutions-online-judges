#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

map<int, int> sides;
vector<int> uniques;

void AddSide(int s) {
	if (sides.find(s) == sides.end())
	{
		sides[s] = 0;
	}
	sides[s]++;
}

void Solve() {
	int a, b, c;
	int us = uniques.size();
	for (int i = us - 1; i >= 0; i--) {
		a = uniques[i];
		sides[a]--;
		for (int j = i; j >= 0; j--) {
			b = uniques[j];
			sides[b]--;
			if (sides[b] >= 0) {
				for (int k = j; k >= 0; k--) {
					c = uniques[k];
					sides[c]--;
					if (sides[c] >= 0) {
						if (b + c > a && a + c > b && a + b > c) {
							cout << c << " " << b << " " << a << endl;
							return;
						}
					}
					sides[c]++;
				}
				sides[b]++;
			}
			sides[a]++;
		}
	}
	cout << -1 << endl;
}

int main() {
	int n, s;
	sides = map<int, int>();
	set<int> available = set<int>();
	cin >> n;
	while (n--) {
		cin >> s;
		AddSide(s);
		available.insert(s);
	}
	uniques = vector<int>(available.begin(), available.end());
	Solve();

	return EXIT_SUCCESS;
}
