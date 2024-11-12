//Question 3.  Design a Finite Automata (FA) that accepts language L1, over Σ={a, b}, comprising of all strings (of length 4 or more) having first two characters same as the last two. Write a program to simulate this FA.

#include <iostream>
using namespace std;

char firstChar, secondChar;

void state0(string str, int i);
void state1(string str, int i);
void state2(string str, int i);
void state3(string str, int i);
void state4(string str, int i);
void state5(string str, int i);
void state6(string str, int i);

int main() {
    string input;
    cout << "Enter a string over {a, b}: ";
    cin >> input;
    
    if (input.length() < 4) {
        cout << "Rejected (Length is less than 4)\n";
        return 0;
    }
    
    state0(input, 0);
    return 0;
}

void state0(string str, int i) {
    if (i >= str.length()) {
        cout << "Rejected\n";
        return;
    }
    firstChar = str[i];
    state1(str, i + 1);
}

void state1(string str, int i) {
    if (i >= str.length()) {
        cout << "Rejected\n";
        return;
    }
    secondChar = str[i];
    state2(str, i + 1);
}

void state2(string str, int i) {
    if (i >= str.length() - 2) {
        state4(str, i);
        return;
    }
    state3(str, i + 1);
}

void state3(string str, int i) {
    if (i >= str.length() - 2) {
        state4(str, i);
        return;
    }
    state3(str, i + 1);
}

void state4(string str, int i) {
    if (i >= str.length() - 1) {
        cout << "Rejected\n";
        return;
    }
    char secondLast = str[i];
    char last = str[i + 1];
    
    if (firstChar == secondLast && secondChar == last) {
        state5(str, i + 1);
    } else {
        state6(str, i + 1);
    }
}

void state5(string str, int i) {
    cout << "Accepted\n";
}

void state6(string str, int i) {
    cout << "Rejected\n";
}


