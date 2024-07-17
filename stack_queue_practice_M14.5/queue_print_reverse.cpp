#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> counter;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        counter.push(x);
    }

    stack<int> books;
    while (!counter.empty())
    {
        books.push(counter.front());
        counter.pop();
    }

    while (!books.empty())
    {
        cout << books.top() << " ";
        books.pop();
    }

    return 0;
}