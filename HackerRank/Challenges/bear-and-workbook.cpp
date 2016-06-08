#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int nChapters, chapterPages, chapterFirstPage = 0, chapterLastPage = 0, specialProblems = 0;
	float maxProblems, nProblems;
	cin >> nChapters >> maxProblems;
	while (nChapters--) {
		cin >> nProblems;
		chapterPages = ceil(nProblems / maxProblems);
		chapterFirstPage += 1;
		chapterLastPage += chapterPages;
		for (int page = chapterFirstPage, i=1; page <= chapterLastPage; page++, i++) {
			int lastProblem = i * maxProblems;			
			int firstProblem = lastProblem - maxProblems + 1;
			if (lastProblem > nProblems){
				lastProblem = nProblems;
			}
			if (page >= firstProblem && page <= lastProblem) {
				specialProblems++;
			}
		}
		chapterFirstPage = chapterLastPage;
	}
	cout << specialProblems << endl;
    return 0;
}
