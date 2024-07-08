#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30};
    // cout << myList.size() << endl;
    // cout << myList.max_size() << endl;
    // myList.clear();
    myList.resize(2);
    myList.resize(5, 50);

    for (int e : myList)
    {
        cout << e << endl;
    }

    return 0;
}