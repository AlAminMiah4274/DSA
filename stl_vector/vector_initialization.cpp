#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> numbers;

    // vector<int> numbers(5);

    // vector<int> numbers(5, 16);

    // vector<int> num(5, 13);
    // vector<int> numbers(num);

    // int arr[5] = {47, 12, 31, 61, 10};
    // vector<int> numbers(arr, arr + 5);

    vector<int> numbers = {4578, 21, 23, 8, 1, 5, 3};
    cout << numbers.size() << endl;
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}