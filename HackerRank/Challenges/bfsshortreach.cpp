#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

#define STEP_SIZE 6

using namespace std;

int nNodes;
vector<vector<int>> nodes;
vector<int> depth;
queue<int> toSearch;

void FillDepth(int start) {

	toSearch = queue<int>();

	toSearch.push(start);
	depth[start] = 0;

	while (!toSearch.empty()) {

		int current = toSearch.front();
		toSearch.pop();

		for (int i = 0; i < nodes[current].size(); i++) {

			int neighbour = nodes[current][i];

			if (depth[neighbour] == -1) {
				depth[neighbour] = depth[current] + 1;
				toSearch.push(neighbour);
			}
		}
	}
}

int main() {
	int nCases, nEdges, indexA, indexB, start;

	cin >> nCases;

	while (nCases--) {

		cin >> nNodes >> nEdges;

		nodes = vector<vector<int>>(nNodes, vector<int>());
		depth = vector<int>(nNodes, -1);

		for (int i = 0; i < nEdges; i++) {
			cin >> indexA >> indexB;
			indexA--; indexB--;
			nodes[indexA].push_back(indexB);
			nodes[indexB].push_back(indexA);
		}
		cin >> start;
		start--;

		FillDepth(start);

		for (int i = 0; i < nNodes; i++)
			if (i != start) {
				cout << (depth[i] == -1 ? -1 : depth[i] * STEP_SIZE) << " ";
			}
		cout << endl;
	}

	return EXIT_SUCCESS;
}


