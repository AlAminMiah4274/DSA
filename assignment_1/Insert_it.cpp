#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> arr_A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr_A[i];
    }

    int M;
    cin >> M;

    vector<int> arr_B(M);
    for (int i = 0; i < M; i++)
    {
        cin >> arr_B[i];
    }

    int X;
    cin >> X;
    arr_A.insert(arr_A.begin() + X, arr_B.begin(), arr_B.end());

    for (int e : arr_A)
    {
        cout << e << " ";
    }

    return 0;
}