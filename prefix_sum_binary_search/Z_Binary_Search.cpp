#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    int numbers[N];
    for (int i = 0; i < N; i++) // O(N)
    {
        cin >> numbers[i];
    }

    sort(numbers, numbers + N); // O(N log N)

    while (Q--) // O(Q)
    {
        int X;
        cin >> X;

        int left = 0, right = N - 1;
        bool flag = false;
        while (left <= right) // O(log N)
        {
            int mid = (left + right) / 2;
            if (numbers[mid] == X)
            {
                flag = true;
                break;
            }

            if (numbers[mid] < X)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        if (flag == true)
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