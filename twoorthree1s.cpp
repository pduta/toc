//Question 2.  Design a Finite Automata (FA) that accepts all strings over Σ={0, 1} having either exactly two 1's or exactly three 1's, not more nor less. Write a program to simulate this FA.

#include <iostream>
using namespace std;

void state0(string str, int i);
void state1(string str, int i);
void state2(string str, int i);
void state3(string str, int i);
void state4(string str, int i);

void state0(string str, int i) {
    if (i == str.length()) {
        cout << "Rejected\n";
        return;
    }
    if (str[i] == '0') {
        state0(str, i + 1);
    } else if (str[i] == '1') {
        state1(str, i + 1);
    } else {
        cout << "Invalid character. Only 0 and 1 allowed.\n";
    }
}

void state1(string str, int i) {
    if (i == str.length()) {
        cout << "Rejected\n";
        return;
    }
    if (str[i] == '0') {
        state1(str, i + 1);
    } else if (str[i] == '1') {
        state2(str, i + 1);
    } else {
        cout << "Invalid character. Only 0 and 1 allowed.\n";
    }
}

void state2(string str, int i) {
    if (i == str.length()) {
        cout << "Accepted (Exactly two 1's)\n";
        return;
    }
    if (str[i] == '0') {
        state2(str, i + 1);
    } else if (str[i] == '1') {
        state3(str, i + 1);
    } else {
        cout << "Invalid character. Only 0 and 1 allowed.\n";
    }
}

void state3(string str, int i) {
    if (i == str.length()) {
        cout << "Accepted (Exactly three 1's)\n";
        return;
    }
    if (str[i] == '0') {
        state3(str, i + 1);
    } else if (str[i] == '1') {
        state4(str, i + 1);
    } else {
        cout << "Invalid character. Only 0 and 1 allowed.\n";
    }
}

void state4(string str, int i) {
    cout << "Rejected (More than three 1's)\n";
}


int main() {
    string input;
    cout << "Enter a binary string: ";
    cin >> input;
    state0(input, 0);
    return 0;
}


