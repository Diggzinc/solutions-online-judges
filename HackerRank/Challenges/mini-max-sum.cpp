#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    vector<long long int> arr(5);
    for (int arr_i = 0; arr_i < 5; arr_i++)
    {
        cin >> arr[arr_i];
    }

    long long int max = LLONG_MIN,
                  min = LLONG_MAX,
                  sum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        max = std::max(max, arr[i]);
        min = std::min(min, arr[i]);
    }

    cout << sum - max << " " << sum -min << endl;
    return EXIT_SUCCESS;
}