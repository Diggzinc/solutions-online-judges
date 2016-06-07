#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int nSegments, nCases, start, exit, max;
	cin >> nSegments >> nCases;
	int *serviceLane = new int[nSegments];
	for (int i = 0; i < nSegments; i++)
	{
		cin >> serviceLane[i];
	}
	while (nCases--) {
		cin >> start >> exit;
		max = 3;
		for (int i = start; i <= exit; i++) {
			max = serviceLane[i] < max ? serviceLane[i] : max;
		}
		cout << max << endl;
	}
	return 0;
}