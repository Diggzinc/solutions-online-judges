#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int t, n, three, five, fifteen;
    
    cin >> t;
    while(t--) {
        cin >> n;
        three=(n-1)/3;
        five=(n-1)/5;
        fifteen=(n-1)/15;
        cout << 3*(three*(three+1)/2)+5*(five*(five+1)/2)-15*(fifteen*(fifteen+1)/2)<<endl;
    }
    return 0;
}
