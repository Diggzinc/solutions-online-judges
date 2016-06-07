#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int nCases;
    int v;
    double p = 0, n = 0, z = 0;
    cin >> nCases;
    for(int i=0;i<nCases;i++) {
        cin >> v;
        if(v > 0){
            p++;
        }else if(v < 0){
            n++;
        }else{
            z++;
        }
    }
    printf("%0.6f\n", p/(double)nCases);
    printf("%0.6f\n", n/(double)nCases);
    printf("%0.6f\n", z/(double)nCases);
    return 0;
}
