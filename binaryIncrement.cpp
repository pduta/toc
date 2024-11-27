#include <iostream>
#include <vector>
#include <string>
using namespace std;

void state1(vector<char> &tape, int i) {
    while (i > 0) { 
        if (tape[i] == '0') {
            tape[i] = '1'; 
            return;         
        } else if (tape[i] == '1') {
            tape[i] = '0'; 
        }
        i--;  
    }

    tape.insert(tape.begin() + 1, '1'); 
}

void displayTape(vector<char> &tape) {
    for (int i = 1; i < tape.size(); i++) {
        if (tape[i] != ' ')  
            cout << tape[i];
    }
    cout << endl;
}

int main() {
    while(true){
        string input;
        cout << "Enter the binary number: ";
        cin >> input;
        vector<char> tape(input.size() + 4, ' ');
        tape[0] = '>';
        for (int i = 0; i < input.size(); ++i) {
            tape[i + 2] = input[i]; 
        }
        state1(tape, input.size() + 1);
        cout << "Result after adding 1: ";
        displayTape(tape);
    }
}
