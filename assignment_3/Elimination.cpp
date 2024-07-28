#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        stack<char> myStack;

        string binary_string;
        cin >> binary_string;
        for (char c : binary_string)
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
            else 
            {
                myStack.push(c);
            }
        }

        string result_string;
        while (!myStack.empty())
        {
            result_string.push_back(myStack.top());
            myStack.pop();
        }

        if (result_string.empty())
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