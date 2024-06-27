#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    int count = 0;
    for (auto it = numbers.begin(); it < numbers.end(); it++)
    {
        int value = *it + 1;
        for (auto jt = numbers.begin(); jt < numbers.end(); jt++)
        {
            if (value == *jt)
            {
                count++;
                break;
            }
        }
    }

    cout << count;

    return 0;
}