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
    vector<int> v_x;
    for (int i = 0; i < Q; i++)
    {
        cin >> X;
        v_x.push_back(X);
    }

    return 0;
}