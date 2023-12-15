#include<iostream>
#include<cctype>
using namespace std;
const int size=100;
class Stack{
    private:
    int top;
    char arr[size];
    public:
    Stack(){top=-1;}
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==size-1;
    }
    void push(char ch){
        if(isFull()){
            cout<<"Stack is overflow\n";return;
        }
        else{
            arr[++top]=ch;
        }
    }
    char pop(){
        if(isEmpty()){
            cout<<"Stack is empty\n";return '\0';
        }
        else{
            return arr[top--];
        }
    }
};

bool isWellParanthesized(string str){
    Stack s;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);
        }
        else if(ch==')' || ch=='}' || ch==']'){
            if(s.isEmpty()){  
                return false;
            }
            char top = s.pop();
            if((ch==')'&&top!='(') || (ch=='}'&&top!='{') || (ch==']'&&top!='[')){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    string expression;
            cout << "Enter an expression: ";
        getline(cin, expression);

        if (isWellParanthesized(expression))
        {
            cout << "Well-parenthesized expression." << endl;
        }
        else
        {
            cout << "Not well-parenthesized expression." << endl;
        }
    return 0;
}
