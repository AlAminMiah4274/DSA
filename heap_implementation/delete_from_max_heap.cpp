#include <bits/stdc++.h>
using namespace std;

void insert_max_heap(vector<int> &v, int x)
{
    v.push_back(x);

    int current_index = v.size() - 1;
    while (current_index != 0)
    {
        int parent_index = (current_index - 1) / 2;
        if (v[parent_index] < v[current_index])
        {
            swap(v[parent_index], v[current_index]);
        }
        else 
        {
            break;
        }
        current_index = parent_index;
    }
}

void print_max_heap(vector<int> v)
{
    for (int num : v)
    {
        cout << num << " ";
    }
    cout << endl;
}

void delete_max_heap(vector<int> &v)
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
            if (v[left] >= v[right] && v[left] > v[current_index])
            {
                swap(v[left], v[current_index]);
                current_index = left;
            }
            else if (v[right] >= v[left] && v[right] > v[current_index])
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

        }
        else if (right <= last_index)
        {
            // right is available 

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
    vector<int> max_heap;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_max_heap(max_heap, x);
    }

    return 0;
}