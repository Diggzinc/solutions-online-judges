#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<int>> tree;
vector<int> edgesWeight;
vector<bool> visited;

int FillEdgesWeight(int node) {
	int weight = 1;
	visited[node] = true;
	for (int i = 0; i < tree[node].size(); i++) {
		if (!visited[tree[node][i]]) {
			weight += FillEdgesWeight(tree[node][i]);
		}
	}
	edgesWeight[node]= weight;
	return weight;
}

int main() {

	int nNodes, nEdges, nodeA, nodeB, totalCuts = 0;

	cin >> nNodes >> nEdges;

	tree = vector<vector<int>>(nNodes, vector<int>());
	edgesWeight = vector<int>(nNodes, 1);
	visited = vector<bool>(nNodes, false);

	for (int i = 0; i < nEdges; i++) {
		cin >> nodeA >> nodeB;
		nodeA--; nodeB--;
		tree[nodeA].push_back(nodeB);
		tree[nodeB].push_back(nodeA);
	}
	FillEdgesWeight(0);

	for (int i = 1; i < nNodes; i++) {
		if (edgesWeight[i] % 2 == 0) {
			totalCuts++;
		}
	}
	cout << totalCuts << endl;
	return EXIT_SUCCESS;
}
