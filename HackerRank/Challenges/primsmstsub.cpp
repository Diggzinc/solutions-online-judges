#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_EDGE_WEIGHT 2147483647

typedef struct Edge {
	int node;
	int weight;

	Edge(int n, int w) {
		node = n;
		weight = w;
	}
}Edge;

vector<vector<Edge>> tree;
vector<bool> visited;
vector<int> visitedNodes;

int MST(int node, int nNodes) {
	int totalWeight = 0;
	visitedNodes.push_back(node);
	visited[node] = true;
	while (--nNodes) {
		int nextNode = -1, minWeight = MAX_EDGE_WEIGHT;
		for (int i = 0; i < visitedNodes.size(); i++)
		{
			int currentNode = visitedNodes[i];
			for (int j = 0; j < tree[currentNode].size(); j++)
			{
				Edge candidate = tree[currentNode][j];
				if (!visited[candidate.node]) {
					if (candidate.weight < minWeight) {
						nextNode = candidate.node;
						minWeight = candidate.weight;
					}
				}
			}
		}
		visited[nextNode] = true;
		visitedNodes.push_back(nextNode);
		totalWeight += minWeight;
	}
	return totalWeight;
}

int main() {

	int nNodes, nEdges, nodeA, nodeB, weight, start;

	cin >> nNodes >> nEdges;
	tree = vector<vector<Edge>>(nNodes, vector<Edge>());
	visited = vector<bool>(nNodes, false);
	visitedNodes = vector<int>();

	for (int i = 0; i < nEdges; i++) {
		cin >> nodeA >> nodeB >> weight;
		nodeA--; nodeB--;
		tree[nodeA].push_back(Edge(nodeB, weight));
		tree[nodeB].push_back(Edge(nodeA, weight));
	}
	cin >> start;
	start--;

	cout << MST(start, nNodes) << endl;

	return EXIT_SUCCESS;
}
