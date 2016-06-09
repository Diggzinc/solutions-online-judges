#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define YEARS_FINE 10000
#define MONTHS_FINE 500
#define DAYS_FINE 15
#define NO_FINE 0
#define ABS_DATE(d,m,y) (y*10000 + m * 100 + d)

int main(){
    int d1, m1, y1, d2, m2, y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    
    if(ABS_DATE(d1,m1,y1) - ABS_DATE(d2,m2,y2) <= 0) {
        cout << NO_FINE << endl;
    }else if(y1 > y2){
        cout << YEARS_FINE << endl;
    }else if(m1 > m2){
        cout << MONTHS_FINE * (m1 - m2) << endl;
    }else if(d1 > d2){
        cout << DAYS_FINE * (d1 - d2) << endl;
    }
    return 0;
}
