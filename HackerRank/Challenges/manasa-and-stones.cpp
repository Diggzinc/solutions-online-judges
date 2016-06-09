#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
Commutative property: When two numbers are added, the sum is the same regardless of the order of the addends. 
For example 4 + 2 = 2 + 4
So a + b = b + a
Which means that we only need the number of a's and b's and we can disregard their position to achieve the final sum

example:
N = 5 (the first stone is always 0)
0 + a + a + a + a
0 + a + a + a + b
0 + a + a + b + b
0 + a + b + b + b
0 + b + b + b + b

*/

int main() { 
    int nCases, n, a, b;
    cin >> nCases;
    while(nCases--){
        cin >> n;
        cin >> a >> b;
        
        if(a!=b){
            if(a>b){
                a ^= b;
                b ^= a;
                a ^= b;
            }
            for(int i=0;i<n-1;i++){
                cout << i*b + (n-i-1)*a << " ";
            }
        }
        cout << (n-1) * b << endl;
        
    }
    return 0;
}
