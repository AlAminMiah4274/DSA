#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> myVector;
    void push(int val)
    {
        myVector.push_back(val);
    }
    void pop()
    {
        myVector.pop_back();
    }
    int top()
    {
        return myVector.back();
    }
    int size()
    {
        return myVector.size();
    }
    bool empty()
    {
        if (myVector.size() == 0)
            return true;
        return false;
    }
};

int main()
{
    // myStack wallet;
    // wallet.push(500);
    // wallet.push(1000);
    // wallet.push(1500);

    // cout << wallet.top() << endl;
    // wallet.pop();
    // wallet.pop();
    // wallet.pop();

    // if (!wallet.empty())
    // {
    //     cout << wallet.top() << endl;
    // }

    myStack wallet;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        wallet.push(value);
    }

    while (!wallet.empty())
    {
        cout << wallet.top() << endl;
        wallet.pop();
    }

    return 0;
}