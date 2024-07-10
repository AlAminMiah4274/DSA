// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     list<int> myList;
//     // list<int> myList_r = myList;

//     int Q;
//     cin >> Q;
//     for (int i = 0; i < Q; i++)
//     {

//         int X, V;
//         cin >> X >> V;
//         if (X == 0)
//         {
//             myList.push_front(V);
//         }
//         else if (X == 1)
//         {
//             myList.push_back(V);
//         }
//         // else if (X == 2)
//         // {
//         //     myList.erase(next(myList.begin(), V));
//         // }

//         // cout << "L -> ";
//         // for (int e : myList)
//         // {
//         //     cout << e << endl;
//         // }
//         // cout << endl;

//         // cout << "R -> ";
//         // myList.reverse();
//         // for (int e : myList)
//         // {
//         //     cout << e << endl;
//         // }
//     }

//     cout << "L -> ";
//     for (int e : myList)
//     {
//         cout << e << endl;
//     }
//     cout << endl;

//     cout << "R -> ";
//     myList.reverse();
//     for (int e : myList)
//     {
//         cout << e << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <list>

int main() {
    int Q;
    std::cin >> Q;
    
    std::list<int> myList;
    
    for (int i = 0; i < Q; ++i) {
        int X, V;
        std::cin >> X >> V;
        
        if (X == 0) {
            // Insert V at the head
            myList.push_front(V);
        } else if (X == 1) {
            // Insert V at the tail
            myList.push_back(V);
        } else if (X == 2) {
            // Delete element at index V if valid
            if (V >= 0 && V < myList.size()) {
                auto it = myList.begin();
                std::advance(it, V);
                myList.erase(it);
            } else {
                // Index V is invalid
                std::cout << "Invalid" << std::endl;
                continue;
            }
        }
        
        // Print list from left to right
        std::cout << "L -> ";
        for (auto it = myList.begin(); it != myList.end(); ++it) {
            std::cout << *it;
            if (std::next(it) != myList.end()) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
        
        // Print list from right to left
        std::cout << "R -> ";
        for (auto it = myList.rbegin(); it != myList.rend(); ++it) {
            std::cout << *it;
            if (std::next(it) != myList.rend()) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    
    return 0;
}
