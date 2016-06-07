#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string str;
    int v;
    
    cin >> str;
    
    v = (str[0]-48) * 10 + str[1] - 48;
    if(str[8] == 'P') {
        if(v != 12) {
            v+=12;
        }
    }else{
         if(v == 12) {
             v=0;
         }
    }
    str[0] = (v/10) + 48;
    str[1] = (v%10) + 48;
    for(int i=0;i<8;i++){
        cout << str[i];
    }
    cout << endl;
    return 0;
}