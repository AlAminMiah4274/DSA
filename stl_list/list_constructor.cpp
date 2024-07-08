#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* there are 5 ways to initialize a list */

    // list<int> myList;

    // list<int> myList(5);

    // list<int> myList(10, 3);

    // list<int> list2 = {1, 2, 3, 4, 5};
    // list<int> myList(list2);

    // int a[5] = {10, 20, 30, 40, 50};
    // list<int> myList(a, a + 5);

    vector<int> numbers = {100, 200, 300}; // optional 
    list<int> myList(numbers.begin(), numbers.end());

    cout << "size: " << myList.size() << endl;

    cout << "value: ";
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    for (int e : myList)
    {
        cout << e << " ";
    }

    return 0;
}