#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MINIMUM_CANDIES 1
#define MAXIMUM_CHILDREN 100001

vector<int> candies;
vector<int> ratings;

int main() {

	long long int  nChildren, current, next, nCandies, totalCandies = 0;

	cin >> nChildren;

	candies = vector<int>(nChildren, MINIMUM_CANDIES);
	ratings = vector<int>(nChildren, 0);

	for (int i = 0; i < nChildren; i++)
	{
		cin >> ratings[i];
	}

	for (int i = 1; i < nChildren; i++)
	{
		if (ratings[i] > ratings[i - 1]) {
			candies[i] = candies[i - 1] + 1;
		}
		else {
			candies[i] = MINIMUM_CANDIES;
		}
	}
	for (int i = nChildren - 2; i >= 0; i--)
	{
		if (ratings[i] > ratings[i + 1]) {
			if (candies[i] <= candies[i + 1]) {
				candies[i] = candies[i + 1] + 1;
			}
		}
	}
	for (int i = 0; i < nChildren; i++)
	{
		totalCandies += candies[i];
	}
	cout << totalCandies << endl;

	return EXIT_SUCCESS;
}
