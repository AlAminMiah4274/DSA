#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    vector<int> numbers(arr, arr + 5);

    for (int element : numbers)
    {
        cout << element << " ";
    }

    return 0;
}