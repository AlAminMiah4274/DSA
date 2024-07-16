#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> queueList;

    void push(int val)
    {
        queueList.push_back(val);
    }

    void pop()
    {
        queueList.pop_front();
    }

    int front()
    {
        return queueList.front();
    }

    int size()
    {
        return queueList.size();
    }

    bool empty()
    {
        return queueList.empty();
    }
};

int main()
{
    myQueue counter;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        counter.push(x);
    }

    while (!counter.empty())
    {
        cout << counter.front() << endl;
        counter.pop();
    }

    return 0;
}