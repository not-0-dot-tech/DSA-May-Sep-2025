#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;

    // add item
    s.insert(10);
    s.insert(20);
    s.insert(30);

    // check if item exists
    if (s.find(20) != s.end())
    {
        cout << "20 found in the set." << endl;
    }

    if (s.find(40) != s.end())
    {
        cout << "40 found in the set." << endl;
    }
    else
    {
        cout << "40 not found in the set." << endl;
    }

    // erase 30
    s.erase(30);

    if (s.find(30) == s.end())
    {
        cout << "30 not found in the set." << endl;
    }

    // it supports indexing but not directly as an array
    // auto it = s.begin();
    // advance(it, 1);
    // cout << "Element at index 1 is: " << *it << endl;

    return 0;
}
