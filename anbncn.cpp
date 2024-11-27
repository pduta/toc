#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Define the tape and head position
vector<char> tape;
int head = 0;
string state = "q0";

void simulateTuringMachine() {
    while (true) {
        if (state == "q0") {
            if (tape[head] == 'a') {
                tape[head] = 'X';
                head++;
                state = "q1";
            } else {
                state = "REJECT";
            }
        } else if (state == "q1") {
            if (tape[head] == 'a') {
                head++;
            } else if (tape[head] == 'b') {
                tape[head] = 'Y';
                head++;
                state = "q2";
            } else {
                state = "REJECT";
            }
        } else if (state == "q2") {
            if (tape[head] == 'b') {
                head++;
            } else if (tape[head] == 'c') {
                tape[head] = 'Z';
                head--;
                state = "q3";
            } else {
                state = "REJECT";
            }
        } else if (state == "q3") {
            if (tape[head] == 'Y') {
                head--;
            } else if (tape[head] == 'X') {
                head++;
                state = "q0";
            } else {
                state = "REJECT";
            }
        } else if (state == "q0-final") {
            if (tape[head] == '_') {
                state = "ACCEPT";
            } else {
                state = "REJECT";
            }
        }

        if (state == "ACCEPT") {
            cout << "String is accepted!" << endl;
            break;
        } else if (state == "REJECT") {
            cout << "String is rejected!" << endl;
            break;
        }
    }
}

int main() {
    string input;
    cout << "Enter a string (only a, b, c): ";
    cin >> input;

    tape.assign(input.begin(), input.end());
    tape.push_back('_');

    simulateTuringMachine();

    return 0;
}
