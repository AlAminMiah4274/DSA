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

    for (auto it = numbers.end()-1; it >= numbers.begin(); it--)
    {
        cout << *it << " ";
    }

    return 0;
}