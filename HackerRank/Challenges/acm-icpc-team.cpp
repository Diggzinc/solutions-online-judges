#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, m, min_topics, agg_topics, teams = 0;
    char t;
    bool **topics;
    
    cin >> n >> m;
    
    topics = new bool*[n];
    for(int i=0;i<n;i++){
        topics[i] = new bool[m];
        for(int j=0;j<m;j++){
            cin >> t;
            topics[i][j] = (t-'0');
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(i!=j) {
                agg_topics = 0;
                for(int t=0;t<m;t++){
                    if(topics[i][t] || topics[j][t]) {
                        agg_topics++;
                    }
                }
                if(agg_topics > min_topics) {
                    min_topics = agg_topics;
                    teams = 1;
                }else if(agg_topics == min_topics){
                    teams++;
                }
            }
        }
    }
    cout << min_topics << endl;
    cout << teams << endl;
    return 0;
}
