#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> myList;
    void push(int val)
    {
        myList.push_back(val);
    }
    void pop()
    {
        myList.pop_back();
    }
    int top()
    {
        return myList.back();
    }
    int size()
    {
        return myList.size();
    }
    int empty()
    {
        if (myList.size() == 0) return true;
        return false;
    }
};

int main()
{
    myStack wallet;

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