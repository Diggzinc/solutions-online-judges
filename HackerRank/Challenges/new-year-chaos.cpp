#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int nCases, size, *queue, temp, swaps;
	bool swaped, faulted;

	cin >> nCases;

	while (nCases--) {

		cin >> size;

		queue = new int[size];
		swaps = 0;
		faulted = false;

		for (int i = 0; i < size; i++) {
			cin >> queue[i];
		}

		//a person cannot advance more than 2 positions 
		//based on it's starting index with less than 3 bribes
		for (int i = 0; i < size; i++)
		{
			if ((queue[i] - 1) - i > 2) {
				cout << "Too chaotic" << endl;
				faulted = true;
				break;
			}
		}
		if (!faulted) {
			for (int i = 0; i < size - 1; i++) {
				for (int j = 0; j < size - 1; j++) {
					if (queue[j] > queue[j + 1]) {
						temp = queue[j];
						queue[j] = queue[j + 1];
						queue[j + 1] = temp;
						swaps += 1;
						swaped = true;
					}
				}
				if (swaped) {
					swaped = false;
				}
				else {
					break;
				}
			}
			cout << swaps << endl;
		}
	}
	return 0;
}
