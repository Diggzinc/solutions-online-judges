#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

#define SKIP(s) (s.length() % 2 != 0)
#define ALPHABET_SIZE 27
using namespace std;

int main() {
    int n;
    string s, left, right;
    cin >> n;
    while(n--) {
        cin >> s;
        if(SKIP(s)) {
            cout << -1 << endl;
        }else {
            int change = 0;
            auto left = vector<int>(ALPHABET_SIZE, 0);
            auto right = vector<int>(ALPHABET_SIZE, 0);
            int size = s.length() / 2;
            for(int i=0;i<size;i++) {
                left[s[i]-'a']++;
                right[s[i+size]-'a']++;
            }
            for(int i=0;i<ALPHABET_SIZE;i++) {
                if(right[i] > left[i]){
                    change+= right[i] - left[i];
                }
            }
            cout << change << endl;
        }
    }
    return EXIT_SUCCESS;
}
