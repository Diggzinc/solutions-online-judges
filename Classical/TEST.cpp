#include <iostream>
 
using namespace std;
 
int main() {
	int input = 0;
	bool print = true;
	while (cin >> input) {
		if (input == 42) break;
		cout << input << endl;
	}
	return EXIT_SUCCESS;
}
