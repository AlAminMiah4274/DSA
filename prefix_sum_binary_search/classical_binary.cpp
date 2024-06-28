#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    sort(numbers, numbers + n);

    int x;
    cin >> x;

    // binary search 
    int left = 0;
    int right = n - 1;
    bool flag = false;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (numbers[mid] == x)
        {
            flag = true;
            break;
        }

        if (x > numbers[mid])
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
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}