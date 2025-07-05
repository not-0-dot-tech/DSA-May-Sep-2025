#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string str;
    cin >> str;

    stack<char> st;
    // Push all characters of the string onto the stack
    for (char ch : str)
        st.push(ch);

    while (!st.empty())
    {
        // Pop characters from the stack and print them
        cout << st.top();
        st.pop();
    }

    return 0;
}
