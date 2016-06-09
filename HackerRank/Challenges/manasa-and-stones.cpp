#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


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
