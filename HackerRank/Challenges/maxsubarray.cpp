#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MIN_VALUE -10001

//with a lame all negative edge case check :(

int main() {
    int nCases, n, v, sumC, sumNC, bufferNC, min;
    bool positives;
    cin >> nCases;
    while(nCases--) {
        
        cin >> n;
        sumC = sumNC = bufferNC = 0;
        min = MIN_VALUE;
        positives =  false;
        while(n--){
            cin >> v;
            if(v>0) {
                sumC += v;
                positives = true;
            }else{
                if(v > min){
                    min = v;
                }
            }
            bufferNC += v;
            if(bufferNC > sumNC) {
                sumNC = bufferNC;
            }
            if(bufferNC < 0) {
                bufferNC = 0;
            }
        }
        if(positives) {
            cout << sumNC << " " << sumC << endl;
        }else{
            cout << min << " " << min << endl;
        }
    }
    return 0;
}
