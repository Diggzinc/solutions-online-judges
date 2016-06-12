#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define NO_MINUTES 0
#define QUARTER_HOUR 15
#define HALF_HOUR 30
#define THREE_QUARTER_HOUR 45
#define FULL_HOUR 60

int main() {

	int hours, minutes;
	char clock[29][100] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen",
							"fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two",
							"twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine" };


	cin >> hours >> minutes;
	if (minutes == NO_MINUTES) {
		cout << clock[hours - 1] << " o' clock" << endl;
	}
	else if (minutes == QUARTER_HOUR) {
		cout << "quarter past " << clock[hours - 1] << endl;
	}
	else if (minutes == HALF_HOUR) {
		cout << "half past " << clock[hours - 1] << endl;
	}
	else if (minutes == THREE_QUARTER_HOUR) {
		cout << "quarter to " << clock[hours] << endl;
	}
	else if (minutes > HALF_HOUR) {
		cout << clock[FULL_HOUR - minutes - 1] << " minutes to " << clock[hours] << endl;
	}
	else {
		cout << clock[minutes - 1] << " minutes past " << clock[hours - 1] << endl;
	}

	return EXIT_SUCCESS;
}
