#include<iostream>
#include<string>
#include<cctype>
using namespace std;

const int size = 100;

class Stack{
    private:
    char arr[size];
    int top;
    public:
    Stack(){
        top=-1;
    }
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top == size -1;
    }
    void push(char ch){
        if(isFull()){
            cout<<"\nStack is overflow\n";
        }
        else{
            arr[++top]=ch;
        }
    }
    char pop(){
        if(isEmpty()){
            cout<<"\nStack is empty\n";return '\0';
        }
        else{
            return arr[top--];
        }
    }
    char peek(){
        if(isEmpty()){
            cout<<"\nStack is empty\n";return '\0';
        }
        else{
            return arr[top];
        }
    }
};

bool isPalindrome(const string str){
    Stack s;
    for (int i=0;i<str.length();i++){
        if(isalnum(str[i])){
            s.push(tolower(str[i]));
    }
    }
    for(int i=0;i<str.length();i++){
        if(isalnum(str[i])){
            if(s.isEmpty()||tolower(str[i])!=s.pop()){
                return false;
            }
        }
    }
    return true;
}

int main(){
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "The given string is a palindrome." << endl;
    } else {
        cout << "The given string is not a palindrome." << endl;
    }
    return 0;
}