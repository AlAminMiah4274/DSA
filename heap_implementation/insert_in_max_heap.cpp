#include <bits/stdc++.h>
using namespace std;

int main()
{
    // for 1 value 
    // vector<int> max_heap{50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
    // int x;
    // cin >> x;

    // max_heap.push_back(x);
    // int current_index = max_heap.size() - 1;

    // while (current_index != 0)
    // {
    //     int parent_index = (current_index - 1) / 2;
    //     if (max_heap[parent_index] < max_heap[current_index])
    //     {
    //         swap(max_heap[parent_index], max_heap[current_index]);
    //     }
    //     else 
    //     {
    //         break;
    //     }
    //     current_index = parent_index;
    // }
    // ---------------

    /*
    for n numbers of value
    complexity O(N log N);
    */
    vector<int> max_heap;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        max_heap.push_back(x);

        int current_index = max_heap.size() - 1;
        while (current_index != 0)
        {
            int parent_index = (current_index - 1) / 2;
            if (max_heap[parent_index], max_heap[current_index])
            {
                swap(max_heap[parent_index], max_heap[current_index]);
            }
            else 
            {
                break;
            }
            current_index = parent_index;
        }
    }

    for (int num : max_heap)
    {
        cout << num << " ";
    }

    return 0;
}