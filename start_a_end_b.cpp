#include <iostream>
using namespace std;

void state1(string str, int i);
void state2(string str, int i);
void state3(string str, int i);
void state4(string str, int i);


void state1(string str , int i){
        if (i == str.length()){
            cout<<"word Rejected\n";
            return;
        }
        if(str[i] == 'a'){
            state2(str , i + 1);
        }
        else if(str[i] == 'b'){
            state4(str , i+ 1);
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
            state2(str , i + 1);
        }
        else if(str[i] == 'b'){
            state3(str , i+ 1);
        }
        else{
            cout<<"Word Rejected\n";
        }
}

void state3(string str , int i){
        if (i == str.length()){
            cout<<"word Accepted\n";
            return;
        }
        if(str[i] == 'a'){
            state2(str , i + 1);
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
            state4(str , i + 1);
        }
        else if(str[i] == 'b'){
            state4(str , i+ 1);
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
