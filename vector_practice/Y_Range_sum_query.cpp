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

    int L, R;
    vector<int> index;
    for (int i = 0; i < Q; i++)
    {
        cin >> L >> R;
        vector<int> v = {L, R};
        index.insert(index.begin(), v.begin(), v.end());
    }

    int sum = 0;
    for (auto it = numbers.begin(); it <= numbers.begin(); it++)
    {
        sum += *it;
    }
    cout << sum;

    return 0;
}