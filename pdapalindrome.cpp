// write a program for simulating the machine which accepts the language {w X wr | w is any string over S={a, b} and wr is reverse of that string and X is a special symbol }.



#include <iostream>
#include <stack>
using namespace std;

void READ1(string s, int index, stack<char> &st);
void READ2(string s, int index, stack<char> &st);
void POP1(string s, int index, stack<char> &st);
void POP2(string s, int index, stack<char> &st);
void POP3(string s, int index, stack<char> &st);

void READ1(string s, int index, stack<char> &st)
{
    if (index == s.length())
    {
        cout << "Word Rejected";
        return;
    }
    if (s[index] == 'a')
    {
        st.push('a');
        READ1(s, index + 1, st);
    }
    else if (s[index] == 'b')
    {
        st.push('b');
        READ1(s, index + 1, st);
    }
    else if (s[index] == 'X')
    {
        READ2(s, index + 1, st);
    }
    else
    {
        cout << "Word Rejected";
        return;
    }
}

void READ2(string s, int index, stack<char> &st)
{
    if (s[index] == 'a')
    {
        POP1(s, index, st);
    }
    else if (s[index] == 'b')
    {
        POP2(s, index, st);
    }
    else if (index == s.length())
    {
        POP3(s, index, st);
    }
    else
    {
        cout << "Word Rejected";
        return;
    }
}

void POP1(string s, int index, stack<char> &st)
{
    if (st.top() == 'a')
    {
        st.pop();
        READ2(s, index + 1, st);
    }
    else
    {
        cout << "Word Rejected";
        return;
    }
}

void POP2(string s, int index, stack<char> &st)
{
    if (st.top() == 'b')
    {
        st.pop();
        READ2(s, index + 1, st);
    }
    else
    {
        cout << "Word Rejected";
        return;
    }
}

void POP3(string s, int index, stack<char> &st)
{
    if (st.empty())
    {
        cout << "Word Accepted";
        return;
    }
    else
    {
        cout << "Word Rejected";
        return;
    }
}

int main()
{
    while (true)
    {
        stack<char> st;
        string s;
        cout << endl
             << "Enter a string: ";
        cin >> s;
        READ1(s, 0, st);
    }
    return 0;
}
