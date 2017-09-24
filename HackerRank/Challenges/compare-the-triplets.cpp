#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void addIf(vector<int> &results, int a, int b)
{
    if (a > b)
    {
        results[0]++;
    }
    else if (a < b)
    {
        results[1]++;
    }
}

vector<int> solve(int a0, int a1, int a2, int b0, int b1, int b2)
{
    vector<int> results = vector<int>(2, 0);
    addIf(results, a0, b0);
    addIf(results, a1, b1);
    addIf(results, a2, b2);
    return results;
}

int main()
{
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector<int> result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++)
    {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;

    return EXIT_SUCCESS;
}