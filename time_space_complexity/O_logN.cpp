#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numbers;
    cin >> numbers;

    while (numbers > 0)
    {
        int digit = numbers % 10;
        cout << digit << endl;
        numbers /= 10;
    }

    return 0;
}