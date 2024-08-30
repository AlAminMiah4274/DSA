#include <bits/stdc++.h>
using namespace std;

/*
complexity for inserting 1 value --> O(log N)
complexity for inserting n numbers of value --> O(N log N) 
*/
void insert_min_heap(vector<int> &v, int x)
{
    v.push_back(x);

    int current_index = v.size() - 1;
    while (current_index != 0)
    {
        int parent_index = (current_index - 1) / 2;
        if (v[current_index] < v[parent_index])
        {
            swap(v[current_index], v[parent_index]);
        }
        else
        {
            break;
        }
        current_index = parent_index;
    }
}

void print_min_heap(vector<int> v)
{
    for (int num : v)
    {
        cout << num << " ";
    }
    cout << endl;
}

/*
complexity for deleting 1 value --> O(log N)
complexity for deleting n numbers of value --> O(N log N) 
*/
void delete_min_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();

    int current_index = 0;
    while (true)
    {
        int left = (current_index * 2) + 1;
        int right = (current_index * 2) + 2;
        int last_index = v.size() - 1;

        if (left <= last_index && right <= last_index)
        {
            // left and right are available 
            if (v[left] <= v[right] && v[left] < v[current_index])
            {
                swap(v[left], v[current_index]);
                current_index = left;
            }
            else if (v[right] <= v[left] && v[right] < v[current_index])
            {
                swap(v[right], v[current_index]);
                current_index = right;
            }
            else 
            {
                break;
            }
        }
        else if (left <= last_index)
        {
            // left is available 
            if (v[left] < v[current_index])
            {
                swap(v[left], v[current_index]);
                current_index = left;
            }
            else 
            {
                break;
            }
        }
        else if (right <= last_index)
        {
            // right is available 
            if (v[right] < v[current_index])
            {
                swap(v[right], v[current_index]);
                current_index = right;
            }
            else 
            {
                break;
            }
        }
        else 
        {
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> min_heap;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_min_heap(min_heap, x);
    }

    delete_min_heap(min_heap);
    print_min_heap(min_heap);

    delete_min_heap(min_heap);
    print_min_heap(min_heap);

    return 0;
}