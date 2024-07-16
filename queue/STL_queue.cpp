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

    cout << counter.size() << endl;

    while(!counter.empty())
    {
        cout << counter.front() << endl;
        counter.pop();
    }

    return 0;
}