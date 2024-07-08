#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 50, 60, 10, 20, 40, 70, 70, 10};

    // myList.remove(10);
    // myList.sort();
    // myList.sort(greater<int>());
    // myList.unique();
    myList.reverse();

    for (int e : myList)
    {
        cout << e << endl;
    }

    return 0;
}