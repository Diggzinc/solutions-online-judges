#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int nCases, cash, price, wrappers, chocolates, eat;
    cin >> nCases;
    while(nCases--) {
        cin >> cash >> price >> wrappers;
        chocolates = cash / price;
        eat = chocolates;
        while(chocolates - wrappers >= 0){
            eat++;
            chocolates-=wrappers;
            chocolates+=1;
        }
        cout << eat << endl;
    }
    return 0;
}
