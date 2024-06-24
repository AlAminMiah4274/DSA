#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50, 60};
    numbers.insert(numbers.begin() + 2, 100);

    for (int n : numbers)
    {
        cout << n << " ";
    }

    return 0;
}