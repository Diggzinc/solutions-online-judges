#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int n, candle, result = 0, max = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> candle;
        if (max == candle)
        {
            result++;
        }
        if (candle > max)
        {
            result = 1;
            max = candle;
        }
    }

    cout << result << endl;
    return EXIT_SUCCESS;
}