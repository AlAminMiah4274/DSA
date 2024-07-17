#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> mainBooks;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mainBooks.push(x);
    }

    stack<int> copyBooks;
    while (!mainBooks.empty())
    {
        copyBooks.push(mainBooks.top());
        mainBooks.pop();
    }

    while (!copyBooks.empty())
    {
        cout << copyBooks.top() << " ";
        copyBooks.pop();
    }

    return 0;
}