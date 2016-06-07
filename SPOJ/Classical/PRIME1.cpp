#include<iostream>
#include<vector>
#include<math.h>

#define MAX_GAP 100000
#define ROUNDED_MAX_GAP_SQRT 32000
#define ROUNDED_MAX_GAP_SQRT_SQRT 180

using namespace std;

vector<int> SimpleSieve() {
	vector<bool> marks = vector<bool>(ROUNDED_MAX_GAP_SQRT + 1, true);
	marks[0] = marks[1] = false;

	for (int p = 3; p*p < ROUNDED_MAX_GAP_SQRT_SQRT; p += 2) {
		if (marks[p]) {
			for (int i = p * 2; i < ROUNDED_MAX_GAP_SQRT; i += p) {
				marks[i] = false;
			}
		}
	}

	vector<int> primes = vector<int>();
	primes.push_back(2);
	for (int p = 3; p < ROUNDED_MAX_GAP_SQRT; p += 2)
	{
		if (marks[p])
		{
			primes.push_back(p);
		}
	}

	return primes;
}

void SegmentedSieve(int lowerBound, int upperBound, vector<int>& simpleSievePrimes) {

	int gap = upperBound - lowerBound + 1,
		startValue = 0,
		prime = 0,
		length = 0;
	vector<bool> marks = vector<bool>(gap, true);
	length = simpleSievePrimes.size();
	marks[0] = (lowerBound != 1);
	startValue = lowerBound % 2 == 0 ? lowerBound + 1 : lowerBound;

	int limit = floor(sqrt(upperBound)) + 1;
	for (int i = 0; i < length; i++) {
		prime = simpleSievePrimes[i];
		startValue = (lowerBound / prime)* prime;
		if (startValue < lowerBound) startValue += prime;
		for (int boundedValue = startValue; boundedValue <= upperBound; boundedValue+=prime) {
			if (boundedValue % prime == 0 && boundedValue != prime) {
				marks[boundedValue - lowerBound] = false;
			}
		}
	}

	for (int boundedValue = lowerBound; boundedValue <= upperBound; boundedValue++) {
		if (marks[boundedValue - lowerBound]) {
			cout << boundedValue << endl;
		}
	}
}

int main() {

	int cases = 0,
		lowerBound = 0,
		upperBound = 0,
		length = 0;

	vector<int> simpleSievePrimes = SimpleSieve();

	cin >> cases;

	for (int c = 0; c < cases; c++) {
		if (c) {
			cout << endl;
		}
		cin >> lowerBound >> upperBound;

		if (lowerBound < 2) {
			lowerBound = 2;
		}

		SegmentedSieve(lowerBound, upperBound, simpleSievePrimes);
	}
	return EXIT_SUCCESS;
}
