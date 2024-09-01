#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string sentence;
        getline(cin, sentence);

        stringstream word_maker(sentence);
        string word;

        map<string, int> max_count;
        
        string max_word;
        int count = 0;
        while (word_maker >> word)
        {
            // cout << word << endl;
            max_count[word]++;

            if (max_count[word] > count)
            {
                count = max_count[word];
                max_word = word;
            }
            
        }

        cout << max_word << " " << count << endl;
    }

    return 0;
}

/*
map r pair use korei korte parben.
map er moddhe jokhon count baraben tokhon pair er sob theke highest bar jeta 
asche oita track rakhben. pore pair theke print kore diben

Module এ যেভাবে দেখানো হয়েছে ওভাবে করবেন । 
শুধু লুপের ভেতর map আপডেট করার সময় max count টা ভেরিয়েবলে 
আর max word আরেকটা ভেরিয়েবলে store করে রাখবেন । তারপর প্রিন্ট করার সময় 
max_word আর mp[max_word] করবেন

let's say max holo 2, porer ta jokhon check korben dekhben 2 theke beshi holo kina, 
max er shoman hole assign korben na

mp[word]++; এভাবে module এর মত করেই
*/