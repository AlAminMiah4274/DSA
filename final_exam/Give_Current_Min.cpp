#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> numbers;
    while (n--)
    {
        int num;
        cin >> num;

        numbers.push(num);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int val;
        cin >> val;

        if (val == 0)
        {
            // take input
            int num;
            cin >> num;

            numbers.push(num);

            if (!numbers.empty())
            {
                cout << numbers.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        if (val == 1)
        {
            // print the value
            if (!numbers.empty())
            {
                cout << numbers.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        if (val == 2)
        {
            // delete the value
            if (!numbers.empty())
            {
                numbers.pop();
            }

            if (!numbers.empty())
            {
                cout << numbers.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}