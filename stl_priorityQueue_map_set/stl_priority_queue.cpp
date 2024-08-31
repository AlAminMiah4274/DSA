#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    min heap/ priority queue
    priority_queue<int, vector<int>, greater<int>> p_queue;
    */
    priority_queue<int> p_queue;

    while (true)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            int val;
            cin >> val;
            p_queue.push(val); // O(log N)
        }
        else if (command == 1)
        {
            p_queue.pop(); // O(log N) 
        }
        else if (command == 2)
        {
            cout << p_queue.top() << endl; // O(1) 
        }
        else 
        {
            break;
        }
    }

    return 0;
}