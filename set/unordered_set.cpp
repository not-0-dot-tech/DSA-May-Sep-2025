#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;

    // add item
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(20); // duplicate insertion, will be ignored

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

    // cout << s[1]; // error because unordered_set does not support indexing

    return 0;
}
