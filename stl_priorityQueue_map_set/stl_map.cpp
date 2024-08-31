#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> person_info;

    // element inserting in map
    person_info.insert({"Al Amin Miah", 1001});
    person_info.insert({"Sabbir Howlader", 1002});
    person_info.insert({"Masum Billah", 1003});
    person_info.insert({"Sanim", 1004});

    person_info["Miah"] = 1005;
    person_info["Sinha"] = 1006;
    person_info["Rasel"] = 1007;

    // iteration through the map
    // for (auto it = person_info.begin(); it != person_info.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // element accessing 
    // cout << person_info["Al Amin Miah"] << endl;
    // cout << person_info["Sina"] << endl;

    // element existence checking 
    // if (person_info.count("Sinha"))
    // {
    //     cout << "Yes" << endl;
    // }
    // else 
    // {
    //     cout << "No" << endl;
    // }

    // checking element existence 
    if (person_info.find("Miah") != person_info.end())
    {
        cout << "Yes" << endl;
    }
    else 
    {
        cout << "No" << endl;
    }

    // element removing 
    person_info.erase("Miah");

    if (person_info.count("Miah"))
    {
        cout << "Yes" << endl;
    }
    else 
    {
        cout << "No" << endl;
    }

    for(auto it = person_info.begin(); it != person_info.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}

/*
Operations performed on map: insertion, searching, deletion, iteration. 
*/