#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> numbers;
    for (int i = 1; i <= n; i++)
    {
        numbers.push_back(i);
    }

    for (int element : numbers)
    {
        cout << element << " ";
    }

    return 0;
}