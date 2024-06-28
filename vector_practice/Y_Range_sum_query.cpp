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

    // int L, R;
    // for (int i = 0; i < Q; i++)
    // {
    //     cin >> L >> R;
    //     int sum = 0;
    //     for (auto it = numbers.begin() + (L - 1); it <= numbers.begin() + (R - 1); it++)
    //     {
    //         sum += *it;
    //     }
    //     cout << sum << endl;
    // }

    while (Q--)
    {
        int L, R;
        cin >> L >> R;
        L--;
        R--;

        int sum = 0;
        for (int i = L; i <= R; i++)
        {
            sum += numbers[i];
        }

        cout << sum << endl;
    }

    return 0;
}