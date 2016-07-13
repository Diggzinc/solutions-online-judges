#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int n, i, j, v;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        j = s.length() - 1;
        v = i = 0;
        while(j>i){
            v += abs((int)(s[j]-s[i]));
            j--;
            i++;
        }
        cout << v << endl;
    }
    return EXIT_SUCCESS;
}
