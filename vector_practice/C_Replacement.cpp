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

    for (int element : numbers)
    {
        if (element > 0)
        {
            element = 1;
        }
        else if (element < 0)
        {
            element = 2;
        }

        cout << element << " ";
    }

    return 0;
}