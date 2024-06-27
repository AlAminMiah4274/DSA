#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr_a(n), arr_b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr_a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr_b[i];
    }

    arr_b.insert(arr_b.begin()+n, arr_a.begin(), arr_a.end());

    for (int e : arr_b)
    {
        cout << e << " ";
    }

    return 0;
}