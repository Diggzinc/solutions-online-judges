#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int nCases, nCase;
    long long int sum = 0;
    cin >> nCases;
    while(nCases--){
        cin >> nCase;
        sum += nCase;
    }
    cout << sum;  
    return 0;
}
