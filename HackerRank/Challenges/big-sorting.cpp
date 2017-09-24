#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool sortBigInteger(const string &left, const string &right)
{
    if (left.size() == right.size())
        return left < right;

    else
        return left.size() < right.size();
}

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for (int i = 0; i < n; i++)
    {
        cin >> unsorted[i];
    }

    sort(unsorted.begin(), unsorted.end(), sortBigInteger);

    for (int i = 0; i < n; i++)
    {
        cout << unsorted[i] << endl;
    }

    return EXIT_SUCCESS;
}
