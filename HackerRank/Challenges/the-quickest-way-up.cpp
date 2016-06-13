#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

#define BOARD_SQUARES 101
#define MAX_N_ROLLS 100
#define MAX_ROLL_VALUE 6
#define INVALID_RESULT -1

queue<int> toPlay;
vector<int> rollsWeight;
vector<int> snakes;
vector<int> ladders;

void Solve() {

	toPlay.push(1);
	rollsWeight[1] = 0;
	while (!toPlay.empty()) {

		int current = toPlay.front();
		toPlay.pop();
		for (int i = 1; i <= MAX_ROLL_VALUE && current + i < BOARD_SQUARES; i++) {
			int next;
			if (snakes[current + i]) {
				next = snakes[current + i];
			}
			else if (ladders[current + i]) {
				next = ladders[current + i];
			}
			else {
				next = current + i;
			}

			if (rollsWeight[next] > rollsWeight[current]) {
				rollsWeight[next] = rollsWeight[current] + 1;
				toPlay.push(next);
			}
		}
	}

}

void Input() {
	int nLadders, nSnakes, start, end;
	cin >> nLadders;

	for (int i = 0; i < nLadders; i++) {
		cin >> start >> end;
		ladders[start] = end;
	}

	cin >> nSnakes;

	for (int i = 0; i < nSnakes; i++) {
		cin >> start >> end;
		snakes[start] = end;
	}
}

int main() {

	int nCases, minimumRolls;

	cin >> nCases;

	while (nCases--) {

		toPlay = queue<int>();
		snakes = vector<int>(BOARD_SQUARES, 0);
		ladders = vector<int>(BOARD_SQUARES, 0);
		rollsWeight = vector<int>(BOARD_SQUARES, MAX_N_ROLLS);
		
		Input();

		Solve();

		minimumRolls = rollsWeight[BOARD_SQUARES - 1];
		cout << (minimumRolls == MAX_N_ROLLS ? INVALID_RESULT : minimumRolls) << endl;

	}
	return EXIT_SUCCESS;
}
