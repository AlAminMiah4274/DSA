#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    vector<int> numbers(N);
    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }

    int X;
    for (int i = 0; i < Q; i++)
    {
        cin >> X;
        int flag = 0;
        for (auto it = numbers.begin(); it < numbers.end(); it++)
        {
            if (*it == X)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else 
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}