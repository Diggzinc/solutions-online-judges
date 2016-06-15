#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
n XOR n = 0;
n XOR 0 = n;
*/

int main() {
    int nCases, next, lonelyInteger;
    cin >> nCases;
    while(nCases--){
        cin >> next;
        lonelyInteger ^= next;
    }
    cout << lonelyInteger << endl;
    return 0;
}
