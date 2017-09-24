#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <climits>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

void insertionSort(int _ar_size, int *ar)
{
    int p = 1;
    int i = 0;

    for (int i = 0; i < _ar_size - 1; i++)
    {
        int p = i + 1;
        int v = ar[p];
        if (v < ar[i]) //if the value that is on front is less that the current
        {
            while (ar[--p] > v)
            {
                ar[p + 1] = ar[p]; //shift to the right
            }
            ar[p + 1] = v; //places v in correct position
        }
        for (int j = 0; j < _ar_size; j++)
        {
            cout << ar[j] << " ";
        }
        cout << endl;
    }
}

int main(int argc, char **argv)
{
    int _ar_size;
    cin >> _ar_size;
    int _ar[_ar_size], _ar_i;
    for (_ar_i = 0; _ar_i < _ar_size; _ar_i++)
    {
        cin >> _ar[_ar_i];
    }

    insertionSort(_ar_size, _ar);
    return EXIT_SUCCESS;
}
