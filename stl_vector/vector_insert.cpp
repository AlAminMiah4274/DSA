#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50, 60};
    numbers.insert(numbers.begin()+5, 1005);

    vector<int> num = {1, 10, 101, 1001};
    numbers.insert(numbers.begin()+2, num.begin(), num.end());
    

    for (int element : numbers)
    {
        cout << element << " ";
    }

    return 0;
}