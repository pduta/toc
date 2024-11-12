#include <iostream>
using namespace std;

void stateX1(string s, int index);
void stateX2(string s, int index);
void stateX3Y1(string s, int index);
void stateX3Y1Y2(string s, int index);

void stateX1(string s, int index)
{
    if (index == s.length())
    {
        cout << "Word Rejected";
        return;
    }

    if (s[index] == 'b')
    {
        stateX2(s, index + 1);
    }
    else if (s[index] == 'a')
    {
        stateX3Y1(s, index + 1);
    }
    else
    {
        cout << "Word Rejected";
    }
}
void stateX2(string s, int index)
{
    if (index == s.length())
    {
        cout << "Word Rejected";
        return;
    }

    if (s[index] == 'a' || s[index] == 'b')
    {
        stateX2(s, index + 1);
    }
    else
    {
        cout << "Word Rejected";
    }
}

void stateX3Y1(string s, int index)
{
    if (index == s.length())
    {
        cout << "Word Rejected";
        return;
    }

    if (s[index] == 'b')
    {
        stateX3Y1(s, index + 1);
    }
    else if (s[index] == 'a')
    {
        stateX3Y1Y2(s, index + 1);
    }
    else
    {
        cout << "Word Rejected";
    }
}

void stateX3Y1Y2(string s, int index)
{
    if (index == s.length())
    {
        cout << "Word Accepted";
        return;
    }

    if (s[index] == 'b')
    {
        stateX3Y1(s, index + 1);
    }
    else if (s[index] == 'a')
    {
        stateX3Y1Y2(s, index + 1);
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
        stateX1(s, 0);
    }
    return 0;
}

