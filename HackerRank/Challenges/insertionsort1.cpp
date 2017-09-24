#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void insertionSort(vector<int> ar)
{
    int _ar_size = ar.size();
    int p = ar.size() - 1;
    int v = ar[p];
    while (ar[--p] > v)
    {
        ar[p + 1] = ar[p]; //shift to the right
        for (int i = 0; i < _ar_size; i++)
        {
            cout << ar[i] << " ";
        }
        cout << endl;
    }
    ar[p + 1] = v;
    for (int i = 0; i < _ar_size; i++)
    {
        cout << ar[i] << " ";
    }
}

int main(void)
{
    vector<int> _ar;
    int _ar_size;
    cin >> _ar_size;
    for (int _ar_i = 0; _ar_i < _ar_size; _ar_i++)
    {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp);
    }

    insertionSort(_ar);
    return EXIT_SUCCESS;
}
