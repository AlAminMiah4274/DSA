#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> stackA;
    queue<int> queueB;

    int N, M;
    cin >> N >> M;

    
    for (int i = 0; i < N; i++)
    {
        int n_val;
        cin >> n_val;
        stackA.push(n_val);
    }

    
    for (int i = 0; i < M; i++)
    {
        int m_val;
        cin >> m_val;
        queueB.push(m_val);
    }

    bool flag = true;
    if (stackA.size() == queueB.size())
    {
        while (!stackA.empty())
        {
            if (stackA.top() != queueB.front())
            {
                flag = false;
                break;
            }
            stackA.pop();
            queueB.pop();
        }
    }
    else 
    {
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
