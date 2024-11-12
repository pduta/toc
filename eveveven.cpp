// Question 5.  Design a Finite Automata (FA) that accepts language EVEN-EVEN over Σ={a, b}. Write a program to simulate this FA.

#include <iostream>
using namespace std;

void state0(string str, int i);
void state1(string str, int i);
void state2(string str, int i);
void state3(string str, int i);

int main() {
    string input;
    cout << "Enter a string over {a, b}: ";
    cin >> input;
    
    state0(input, 0);
    return 0;
}

void state0(string str, int i) {
    if (i == str.length()) {
        cout << "Accepted\n";
        return;
    }
    if (str[i] == 'a') {
        state2(str, i + 1);
    } else if (str[i] == 'b') {
        state1(str, i + 1);
    } else {
        cout << "Invalid input. Only 'a' and 'b' are allowed.\n";
    }
}

void state1(string str, int i) {
    if (i == str.length()) {
        cout << "Rejected\n";
        return;
    }
    if (str[i] == 'a') {
        state3(str, i + 1);
    } else if (str[i] == 'b') {
        state0(str, i + 1);
    } else {
        cout << "Invalid input. Only 'a' and 'b' are allowed.\n";
    }
}

void state2(string str, int i) {
    if (i == str.length()) {
        cout << "Rejected\n";
        return;
    }
    if (str[i] == 'a') {
        state0(str, i + 1);
    } else if (str[i] == 'b') {
        state3(str, i + 1);
    } else {
        cout << "Invalid input. Only 'a' and 'b' are allowed.\n";
    }
}

void state3(string str, int i) {
    if (i == str.length()) {
        cout << "Rejected\n";
        return;
    }
    if (str[i] == 'a') {
        state1(str, i + 1);
    } else if (str[i] == 'b') {
        state2(str, i + 1);
    } else {
        cout << "Invalid input. Only 'a' and 'b' are allowed.\n";
    }
}


