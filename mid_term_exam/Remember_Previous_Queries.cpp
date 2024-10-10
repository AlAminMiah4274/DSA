#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> my_list;
    
    int q;
    cin >> q;
    
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        
        
        if (x == 0)
        {
            my_list.push_front(v);
        }
        else if (x == 1)
        {
            my_list.push_back(v);
        }
        else if (x == 2)
        {
            if (v < my_list.size())
            {
                my_list.erase(next(my_list.begin(), v));
            }
        }

        cout << "L -> ";
        for (int e : my_list)
        {
            cout << e << " ";
        }
        cout << endl;


        cout << "R -> ";
        for (auto it = my_list.rbegin(); it != my_list.rend(); it++)
        {
            cout << *it << " ";
        }
    }


    return 0;
}



/*
A different way to print a stl list reversely: 

    list<int> numbers = {10, 20, 30, 40, 50};
    
    
    for (auto it = (--numbers.end()); it != (--numbers.begin()); it--)
    {
        cout << (*it) << " ";
    }

*/
