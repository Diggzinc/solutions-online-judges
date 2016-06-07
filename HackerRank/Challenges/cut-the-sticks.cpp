#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#define MAX_CUT 1001

using namespace std;

int main() {

	int nSticks, cut = MAX_CUT;
	cin >> nSticks;
	int *sticks = new int[nSticks];
	for (int i = 0; i < nSticks; i++)
	{
		cin >> sticks[i];
		if (sticks[i] < cut) {
			cut = sticks[i];
		}
	}
	bool cutted;
	int nextCut = MAX_CUT, sticksCut;
	do {
		cutted = false;
		sticksCut = 0;
		for (int i = 0; i < nSticks; i++)
		{
			if (sticks[i] != 0) {
				cutted = true;
				sticks[i] -= cut;
				sticksCut++;
				if (sticks[i] != 0 && sticks[i] < nextCut) {
					nextCut = sticks[i];
				}
			}
		}
		if (cutted) {
			cout << sticksCut << endl;
			cut = nextCut;
			nextCut = MAX_CUT;
		}
	} while (cutted);
	return 0;
}