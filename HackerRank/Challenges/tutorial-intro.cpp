#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//it asks for an array but... meh.

int main() {
    int c,n,v;
    bool skip = false;
    cin >> c >> n;
    for(int i=0;i<n;i++){
        cin >> v;
        if(v == c && !skip){
            cout << i << endl;
            skip = true;
        }
    }
    return 0;
}
