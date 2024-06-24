#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numbers;

    // cout << numbers.size() << endl;
    // cout << numbers.max_size() << endl;
    // cout << numbers.capacity() << endl;

    numbers.push_back(15);
    numbers.push_back(21);
    numbers.push_back(5);
    numbers.push_back(6);
    numbers.push_back(10);

    // numbers.clear();
    // numbers.resize(3);
    numbers.resize(7, 30);

    cout << numbers.size() << endl;
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}