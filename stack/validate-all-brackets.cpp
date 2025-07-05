#include <iostream>
#include <stack>
using namespace std;

bool checkvalidPair(char opening, char closing)
{
    if (opening == '(' && closing == ')')
        return true;
    else if (opening == '{' && closing == '}')
        return true;
    else if (opening == '[' && closing == ']')
        return true;
    else
        return false;
}

bool checkBalancedBrackets(string expression)
{
    stack<char> st;

    for (char ch : expression)
    {
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (st.empty() || !checkvalidPair(st.top(), ch))
                return false;
            else
                st.pop();
        }
    }

    return st.empty();

    // if (st.empty())
    //     return true;
    // else
    //     return false;
}

int main()
{
    string expression;
    cin >> expression;

    if (checkBalancedBrackets(expression))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;

    return 0;
}
