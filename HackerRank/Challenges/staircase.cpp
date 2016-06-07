#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int height, row;
    cin >> height;
    row = height;
    while(row--){
        for(int i=height-1, t=height-row;i>=0;i--){
            cout << (t > i ? "#" : " " ); 
        }
        cout << endl;
    }
    return 0;
}
