#include <iostream>
using namespace std;

void state1(string str, int i);
void state2(string str, int i);
void state3(string str, int i);
void state4(string str, int i);
void state5(string str, int i);
void state6(string str, int i);
void state7(string str, int i);
void state8(string str, int i);
void state9(string str, int i);
void state10(string str, int i);
void state11(string str, int i);
void state12(string str, int i);
void state13(string str, int i);
void state14(string str, int i);
void state15(string str, int i);


void state1(string str , int i){
        if (i == str.length()){
            cout<<"word Rejected\n";
            return;
        }
        if(str[i] == 'a'){
            state2(str , i + 1);
        }
        else if(str[i] == 'b'){
            state6(str , i+ 1);
        }
        else{
            cout<<"Word Rejected\n";
        }
}


void state2(string str , int i){
        if (i == str.length()){
            cout<<"word Rejected\n";
            return;
        }
        if(str[i] == 'a'){
            state3(str , i + 1);
        }
        else if(str[i] == 'b'){
            state10(str , i+ 1);
        }
        else{
            cout<<"Word Rejected\n";
        }
}

void state3(string str , int i){
        if (i == str.length()){
            cout<<"word Rejected\n";
            return;
        }
        if(str[i] == 'a'){
            state4(str , i + 1);
        }
        else if(str[i] == 'b'){
            state3(str , i+ 1);
        }
        else{
            cout<<"Word Rejected\n";
        }
}

void state4(string str , int i){
        if (i == str.length()){
            cout<<"word Rejected\n";
            return;
        }
        if(str[i] == 'a'){
            state5(str , i + 1);
        }
        else if(str[i] == 'b'){
            state3(str , i+ 1);
        }
        else{
            cout<<"Word Rejected\n";
        }
}

void state5(string str , int i){
        if (i == str.length()){
            cout<<"word Accepted\n";
            return;
        }
        if(str[i] == 'a'){
            state5(str , i + 1);
        }
        else if(str[i] == 'b'){
            state3(str , i+ 1);
        }
        else{
            cout<<"Word Rejected\n";
        }
}

void state6(string str , int i){
        if (i == str.length()){
            cout<<"word Rejected\n";
            return;
        }
        if(str[i] == 'a'){
            state13(str , i + 1);
        }
        else if(str[i] == 'b'){
            state7(str , i+ 1);
        }
        else{
            cout<<"Word Rejected\n";
        }
}


void state7(string str , int i){
        if (i == str.length()){
            cout<<"word Rejected\n";
            return;
        }
        if(str[i] == 'a'){
            state7(str , i + 1);
        }
        else if(str[i] == 'b'){
            state8(str , i+ 1);
        }
        else{
            cout<<"Word Rejected\n";
        }
}

void state8(string str , int i){
        if (i == str.length()){
            cout<<"word Rejected\n";
            return;
        }
        if(str[i] == 'a'){
            state7(str , i + 1);
        }
        else if(str[i] == 'b'){
            state9(str , i+ 1);
        }
        else{
            cout<<"Word Rejected\n";
        }
}

void state9(string str , int i){
        if (i == str.length()){
            cout<<"word Accepted\n";
            return;
        }
        if(str[i] == 'a'){
            state7(str , i + 1);
        }
        else if(str[i] == 'b'){
            state9(str , i+ 1);
        }
        else{
            cout<<"Word Rejected\n";
        }
}

void state10(string str , int i){
        if (i == str.length()){
            cout<<"word Rejected\n";
            return;
        }
        if(str[i] == 'a'){
            state11(str , i + 1);
        }
        else if(str[i] == 'b'){
            state10(str , i+ 1);
        }
        else{
            cout<<"Word Rejected\n";
        }
}

void state11(string str , int i){
        if (i == str.length()){
            cout<<"word Rejected\n";
            return;
        }
        if(str[i] == 'a'){ 
            state11(str , i + 1);
        }
        else if(str[i] == 'b'){
            state12(str , i+ 1);
        }
        else{
            cout<<"Word Rejected\n";
        }
}

void state12(string str , int i){
        if (i == str.length()){
            cout<<"word Accepted\n";
            return;
        }
        if(str[i] == 'a'){
            state11(str , i + 1);
        }
        else if(str[i] == 'b'){
            state10(str , i+ 1);
        }
        else{
            cout<<"Word Rejected\n";
        }
}


void state13(string str , int i){
        if (i == str.length()){
            cout<<"word Rejected\n";
            return;
        }
        if(str[i] == 'a'){
            state13(str , i + 1);
        }
        else if(str[i] == 'b'){
            state14(str , i+ 1);
        }
        else{
            cout<<"Word Rejected\n";
        }
}

void state14(string str , int i){
        if (i == str.length()){
            cout<<"word Rejected\n";
            return;
        }
        if(str[i] == 'a'){
            state15(str , i + 1);
        }
        else if(str[i] == 'b'){
            state14(str , i+ 1);
        }
        else{
            cout<<"Word Rejected\n";
        }
}

void state15(string str , int i){
        if (i == str.length()){
            cout<<"word Accepted\n";
            return;
        }
        if(str[i] == 'a'){
            state13(str , i + 1);
        }
        else if(str[i] == 'b'){
            state14(str , i+ 1);
        }
        else{
            cout<<"Word Rejected\n";
        }
}

int main(int argc, char const *argv[])
{   while(true){
        cout<<"\nEnter 1 to Enter String\n"
        <<"Enter 2 to Exit\n";
        int ch;
        cin>>ch;
        string str;
        switch (ch)
        {
        case 1:
            cout<<"\nEnter a string: ";
            cin>>str;
            if (str == "$")
            {
                str = "";
            }
            
            state1(str,0);
            break;
        
        default:
            exit(0);
            break;
        }

    }
}
