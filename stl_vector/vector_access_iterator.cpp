#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> numbers = {12, 79, 31, 54, 20};

    // cout << numbers.front() << endl;
    // cout << numbers[0] << endl;
    // cout << numbers.back() << endl;
    // cout << numbers[numbers.size()-1] << endl;

    vector<int> numbers = {15, 30, 45, 65, 70};

    for (auto it = numbers.begin(); it < numbers.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}