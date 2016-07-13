#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 10001

int mark[MAX];

int main() {
    int n,m,v;
    cin >> n;
    while(n--){
        cin >> v;
        mark[v]--;
    }
    cin >> m;
    while(m--) {
        cin >> v;
        mark[v]++;
    }
    for(int i=0;i<MAX;i++) {
        if(mark[i]!=0){
            cout << i << " ";
        }
    }
    return EXIT_SUCCESS;
}
