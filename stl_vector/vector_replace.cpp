#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numbers = {10, 70, 30, 70, 70, 60, 70};
    // replace(numbers.begin(), numbers.end(), 70, 100);
    replace(numbers.begin()+2, numbers.end()-2, 70, 105);

    for (int element : numbers)
    {
        cout << element << " ";
    }

    return 0;
}