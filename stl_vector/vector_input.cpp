#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> numbers;
    // int n;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     numbers.push_back(x);
    // }

    int n;
    cin >> n;
    
    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    for (int element : numbers)
    {
        cout << element << " ";
    }

    return 0;
}