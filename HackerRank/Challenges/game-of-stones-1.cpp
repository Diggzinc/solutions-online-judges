#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int nCases, stones, moves;
    cin >> nCases;
    while(nCases--){
        cin >> stones;
        moves = stones % 7;
        cout << (moves == 0 || moves == 1 ? "Second" : "First") << endl;
    }
    return EXIT_SUCCESS;
}
