#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int nCases, nStudents, threshold, arrivalTime, earlyStudents;
	cin >> nCases;
	while (nCases--) {
		cin >> nStudents >> threshold;
		earlyStudents = 0;
		while (nStudents--) {
			cin >> arrivalTime;
			if (arrivalTime <= 0) {
				earlyStudents++;
			} 
		}
		if (earlyStudents >= threshold) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}
	}
	return 0;
}