#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int nCases, nCase, sum = 0;
    cin >> nCases;
    do{
        cin >> nCase;
        sum += nCase;
    }while(--nCases);
    cout << sum << endl;
    return 0;
}
