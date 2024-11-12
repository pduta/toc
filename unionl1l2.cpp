// Question 6.a. Write a program to simulate an FA that accepts Union of the languages L1 and L2.

#include <iostream>
using namespace std;

void stateX1Y1(string s, int index);
void stateX2Y1(string s, int index);
void stateX1Y2(string s, int index);

void stateX1Y1(string s, int index)
{
    if (index == s.length())
    {
        cout << "Word Rejected";
        return;
    }

    if (s[index] == 'a')
    {
        stateX2Y1(s, index + 1);
    }
    else if (s[index] == 'b')
    {
        stateX1Y2(s, index + 1);
    }
    else
    {
        cout << "Word Rejected";
    }
}
void stateX2Y1(string s, int index)
{
    if (index == s.length())
    {
        cout << "Word Accepted";
        return;
    }

    if (s[index] == 'a')
    {
        stateX2Y1(s, index + 1);
    }
    else if (s[index] == 'b')
    {
        stateX1Y2(s, index + 1);
    }
    else
    {
        cout << "Word Rejected";
    }
}

void stateX1Y2(string s, int index)
{
    if (index == s.length())
    {
        cout << "Word Accepted";
        return;
    }

    if (s[index] == 'b')
    {
        stateX1Y2(s, index + 1);
    }
    else if (s[index] == 'a')
    {
        stateX2Y1(s, index + 1);
    }
    else
    {
        cout << "Word Rejected";
    }
}

int main()
{
    while (true)
    {
        string s;
        cout << endl
             << "Enter a string: ";
        cin >> s;
        if (s == "&")
        {
            s = "";
        };
        stateX1Y1(s, 0);
    }
    return 0;
}

