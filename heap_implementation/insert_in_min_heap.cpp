#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> min_heap;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        min_heap.push_back(x);

        int current_index = min_heap.size() - 1;
        while (current_index != 0)
        {
            int parent_index = (current_index - 1) / 2;
            if (min_heap[parent_index] > min_heap[current_index])
            {
                swap(min_heap[parent_index], min_heap[current_index]);
            }
            else 
            {
                break;
            }
            current_index = parent_index;
        }
    }

    for (int num : min_heap)
    {
        cout << num << " ";
    }

    return 0;
}