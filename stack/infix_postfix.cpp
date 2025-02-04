#include <iostream>
#include <stack>
#include <string>
#include <cctype> // For isdigit() and isalpha()

using namespace std;

// Function to determine precedence of operators
int precedence(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

// Function to check if an operator is left associative
bool isLeftAssociative(char op) {
    // In this simple case, assume ^ is right associative and others are left associative
    return op != '^';
}

// Function to perform the infix to postfix conversion
string infixToPostfix(const string &infix) {
    stack<char> opStack; // Stack to hold operators
    string postfix;      // Resultant postfix expression
    
    for (char ch : infix) {
        if (isspace(ch)) {
            continue; // Skip spaces
        } else if (isalnum(ch)) {  // If the character is an operand, add it to postfix
            postfix += ch;
        } else if (ch == '(') {  // If the character is '(', push it to the stack
            opStack.push(ch);
        } else if (ch == ')') {  // If the character is ')', pop and output from the stack
            while (!opStack.empty() && opStack.top() != '(') {
                postfix += opStack.top();
                opStack.pop();
            }
            if (!opStack.empty() && opStack.top() == '(') {
                opStack.pop();  // Pop the '(' from the stack
            } else {
                throw runtime_error("Mismatched parentheses");
            }
        } else {  // The character is an operator
            while (!opStack.empty() && precedence(opStack.top()) > precedence(ch) ||
                   (precedence(opStack.top()) == precedence(ch) && isLeftAssociative(ch))) {
                postfix += opStack.top();
                opStack.pop();
            }
            opStack.push(ch);  // Push the current operator to the stack
        }
    }
    
    // Pop all the operators left in the stack
    while (!opStack.empty()) {
        if (opStack.top() == '(') {
            throw runtime_error("Mismatched parentheses");
        }
        postfix += opStack.top();
        opStack.pop();
    }
    
    return postfix;
}

int main() {
    string infixExpression;
    
    cout << "Enter infix expression: ";
    getline(cin, infixExpression); // Use getline to allow spaces in the input
    
    try {
        string postfixExpression = infixToPostfix(infixExpression);
        cout << "Postfix expression: " << postfixExpression << endl;
    } catch (const runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }
    
    return 0;
}

