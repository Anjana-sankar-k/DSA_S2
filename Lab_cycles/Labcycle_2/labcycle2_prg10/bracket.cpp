#include "bracket.h"


bool BracketFix::isEmpty() const {
    return top == nullptr;
}

void BracketFix::push(char value) {
    Node* newNode = new Node(value);
    newNode->next = top;
    top = newNode;
}

char BracketFix::pop() {
    if (isEmpty()) {
        cerr << "Error: Stack is empty!" << endl;
        exit(EXIT_FAILURE);
    }
    char value = top->data;
    Node* temp = top;
    top = top->next;
    delete temp;
    return value;
}

BracketFix::BracketFix() : top(nullptr) {}

bool BracketFix::checkBalanced(const string& expression) {
    for (char symbol : expression) {
        if (symbol == '(' || symbol == '[' || symbol == '{') {
            push(symbol);
        } else if (symbol == ')' || symbol == ']' || symbol == '}') {
            if (isEmpty()) {
                return false;
            }
            char topChar = pop();
            if ((symbol == ')' && topChar != '(') ||
                (symbol == ']' && topChar != '[') ||
                (symbol == '}' && topChar != '{')) {
                return false;
            }
        }
    }
    return isEmpty();
}
