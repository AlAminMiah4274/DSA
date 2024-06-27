#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // initialized the vector
    vector<int> numbers;
    for (int i = 1; i <= n; i++)
    {
        numbers.push_back(i);
    }

    // printed initial vector properties
    cout << numbers.size() << endl;
    cout << numbers.capacity() << endl;
    cout << numbers.max_size() << endl;

    // resized the vector
    numbers.resize(20, 0);
    cout << numbers.size() << endl;
    cout << numbers.capacity() << endl;

    // cleared 
    numbers.clear();
    cout << numbers.size() << endl;
    cout << numbers.capacity() << endl;

    // checked is empty or not
    bool result = numbers.empty();
    if (result == true)
    {
        cout << "Vector is empty" << endl;
    }
    else 
    {
        cout << "Vector is not empty" << endl;
    }

    // resized again
    numbers.resize(10, 100);
    cout << numbers.size() << endl;
    cout << numbers.capacity() << endl;
    for (int element : numbers)
    {
        cout << element << " ";
    }

    return 0;
}