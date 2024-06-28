#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    long long int numbers[N];
    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }

    // created prefix sum array
    long long int pre[N];
    pre[0] = numbers[0];
    for (int i = 1; i < N; i++)
    {
        pre[i] = numbers[i] + pre[i - 1];
    }

    while (Q--)
    {
        int L, R;
        cin >> L >> R;
        L--; // decrease 1 to convert into index
        R--; // decrease 1 to convert into index

        long long int sum;
        if (L == 0)
        {
            sum = pre[R];
        }
        else 
        {
            sum = pre[R] - pre[L - 1];
        }

        cout << sum << endl;
    }

    return 0;
}