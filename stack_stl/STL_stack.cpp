#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> wallet;

    /*
    Built in functions of stack: 
    push(), pop(), top(), size(), empty()
    */

    // wallet.push(1500);
    // wallet.pop();

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        wallet.push(x);
    }

    while (!wallet.empty())
    {
        cout << wallet.top() << endl;
        wallet.pop();
    }

    return 0;
}