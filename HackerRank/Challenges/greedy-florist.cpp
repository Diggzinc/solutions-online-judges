#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k, s = 0;
    cin >> n >> k;
    vector<int> f = vector<int>(n, 0);
    
    for(int i=0; i<n; i++){
        cin >> f[i];
    }
    
    sort(f.begin(), f.end(), greater<>());
    
    for(int i=0; i<n; i++){
        int x = int(i/k); //min indice for max flower value
        s += f[i]*(x+1);
    }
    cout << s << endl;
    return EXIT_SUCCESS;
}
