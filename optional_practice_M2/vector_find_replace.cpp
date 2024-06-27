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

    int old_value, new_value;
    cin >> old_value >> new_value;

    replace(numbers.begin(), numbers.end(), old_value, new_value);

    int find_value;
    cin >> find_value;

    auto it = find(numbers.begin(), numbers.end(), find_value);

    for (int element : numbers)
    {
        cout << element << " ";
    }
    cout << endl;

    if(it != numbers.end())
    {
        for (int i = 0; i < numbers.size(); i++)
        {
            if (numbers[i] == find_value)
            {
                cout << i << endl;
            }
        }
    }
    else 
    {
        cout << "-1" << endl;
    }

    return 0;
}