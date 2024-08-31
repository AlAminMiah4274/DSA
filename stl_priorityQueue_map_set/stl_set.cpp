#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> numbers_set;

    while (n--)
    {
        int x;
        cin >> x;
        numbers_set.insert(x); // O(log N)
    }

    if (numbers_set.count(17)) // O(log N) 
    {
        cout << "Yes" << endl;
    }
    else 
    {
        cout << "No" << endl;
    }

    numbers_set.erase(200);

    for (auto it = numbers_set.begin(); it != numbers_set.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}

/*
Operations performed on set: insertinon, deletion, searching. 
*/