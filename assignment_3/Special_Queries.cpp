#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    queue<string> counter;
    while (q--)
    {
        char command;
        cin >> command;
        if (command == '0')
        {
            string name;
            cin >> name;
            counter.push(name);
        }
        else if (command == '1')
        {
            if (counter.empty())
            {
                cout << "Invalid" << endl;
            }
            else 
            {
                cout << counter.front() << endl;
                counter.pop();
            }
        }
    }

    return 0;
}