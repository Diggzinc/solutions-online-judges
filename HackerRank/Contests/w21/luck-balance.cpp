#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
#include <bitset>

using namespace std;

int main() {
	priority_queue<long long int, vector<long long int>, less<long long int>>  contests;

	int nContests, threshold;
	long long int luck, contest;
	bool important;
	luck = 0;
	cin >> nContests >> threshold;
	for (int i = 0; i < nContests; i++)
	{
		cin >> contest >> important;
		if (important) {
			contests.push(contest);
		}
		else {
			luck += contest;
		}
	}
	while (!contests.empty()) {
		if (threshold != 0) {
			luck += contests.top();
			threshold--;
		}
		else {
			luck -= contests.top();
		}
		contests.pop();
	}
	cout << luck << endl;
	return EXIT_SUCCESS;
}