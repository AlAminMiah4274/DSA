#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 50, 50, 40, 50};

    list<int> newList = {60, 70, 80};
    // // newList = myList;
    // newList.assign(myList.begin(), myList.end());

    // newList.push_front(100);
    // newList.push_back(200);

    // newList.pop_front();
    // newList.pop_back();

    // myList.insert(next(myList.begin(), 3), 99);
    // myList.erase(next(myList.begin(), 3));

    /* insert and erase multiple values */
    // myList.erase(next(myList.begin(), 0), next(myList.begin(), 3));
    // myList.insert(next(myList.begin(), 1), {55, 66, 77});

    // myList.insert(next(myList.begin(), 5), newList.begin(), newList.end());

    // vector<int> numbers = {1001, 1002, 1003};
    // myList.insert(next(myList.begin(), 3), numbers.begin(), numbers.end());

    // replace(myList.begin(), myList.end(), 50, 99);

    auto it = find(myList.begin(), myList.end(), 100);
    if (it == myList.end())
    {
        cout << "Not found" << endl;
    }
    else 
    {
        cout << "Found" << endl;
    }

    // for (int e : myList)
    // {
    //     cout << e << endl;
    // }

    return 0;
}