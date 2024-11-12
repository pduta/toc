//Question 6.b. Write a program to simulate an FA that accepts Intersection of the languages L1 and L2.


#include <iostream>
using namespace std;

bool DFA_L1(string s) {
    int state = 0;
    for (char c : s) {
        state = (state == 0) ? 1 : 0;
    }
    return state == 0;
}

bool DFA_L2(string s) {
    int state = 0;
    for (char c : s) {
        if (c == 'a') {
            state = (state == 0) ? 1 : 0;
        }
    }
    return state == 0;
}

bool DFA_Intersection(string s) {
    return DFA_L1(s) && DFA_L2(s);
}

int main() {
    while (true) {
        string input;
        cout << "Enter a string (or type 'exit' to quit): ";
        cin >> input;

        if (input == "exit") {
            break;
        }

        if (DFA_Intersection(input)) {
            cout << "String accepted by the intersection DFA." << endl;
        } else {
            cout << "String rejected by the intersection DFA." << endl;
        }
    }
    return 0;
}


