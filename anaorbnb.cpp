//Question 4.  Design a Finite Automata (FA) that accepts language L2, over Σ= {a, b} where L2= a(a+b)*b. Write a program to simulate this FA. 

#include <iostream>
using namespace std;

void state0(string str, int i);
void state1(string str, int i);
void state2(string str, int i);
void state3(string str, int i);

void state0(string str, int i) {
    if (i == str.length()) {
        cout << "Rejected\n";
        return;
    }
    if (str[i] == 'a') {
        state1(str, i + 1);
    } else {
        state3(str, i + 1);
    }
}

void state1(string str, int i) {
    if (i == str.length()) {
        cout << "Rejected\n";
        return;
    }
    if (str[i] == 'a' || str[i] == 'b') {
        if (i == str.length() - 1 && str[i] == 'b') {
            state2(str, i + 1);
        } else {
            state1(str, i + 1);
        }
    } else {
        state3(str, i + 1);
    }
}

void state2(string str, int i) {
    cout << "Accepted\n";
}

void state3(string str, int i) {
    cout << "Rejected\n";
}

int main() {
    string input;
    cout << "Enter a string over {a, b}: ";
    cin >> input;
    
    state0(input, 0);
    return 0;
}




