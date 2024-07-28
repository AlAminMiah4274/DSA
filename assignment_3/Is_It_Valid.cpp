#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        stack<char> myStack;

        string s_one;
        cin >> s_one;
        for (char c : s_one)
        {
            if (c == '1')
            {
                if (!myStack.empty() && myStack.top() == '0')
                {
                    myStack.pop();
                }
                else
                {
                    myStack.push(c);
                }
            }

            if (c == '0')
            {
                if (!myStack.empty() && myStack.top() == '1')
                {
                    myStack.pop();
                }
                else 
                {
                    myStack.push(c);
                }
            }
        }

        string s_two;
        while (!myStack.empty())
        {
            s_two.push_back(myStack.top());
            myStack.pop();
        }

        if (s_two.empty())
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}