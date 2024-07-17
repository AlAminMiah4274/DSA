#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> books;
    queue<int> counter;

    int q_one;
    cin >> q_one;
    for (int i = 0; i < q_one; i++)
    {
        int x;
        cin >> x;
        books.push(x);
    }

    int q_two;
    cin >> q_two;
    for (int i = 0; i < q_two; i++)
    {
        int x;
        cin >> x;
        counter.push(x);
    }

    bool flag = true;
    if (books.size() == counter.size())
    {
        while (!books.empty())
        {
            if (books.top() != counter.front())
            {
                flag = false;
                break;
            }
            books.pop();
            counter.pop();
        }
    }
    else {
        flag = false;
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}