#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, v, r, sumA = 0, sumB = 0;
    cin >> n;
    r = n - 1;
    for(int i=0;i<n;i++,r--){
        for(int j=0; j<n;j++){
            cin >> v;
            if(i==j) {
                sumA += v;
            }
            if(j==r) {
                sumB += v;
            }
        }
    }
    cout << abs(sumA - sumB) << endl;
    return 0;
}
