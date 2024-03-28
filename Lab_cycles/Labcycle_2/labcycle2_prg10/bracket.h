#include <iostream>
using namespace std;

class BracketFix {
private:
    struct Node {
        char data;
        Node* next;
        Node(char value) : data(value), next(nullptr) {}
    };

    Node* top;
    bool isEmpty() const;
    void push(char value);
    char pop();

public:
    BracketFix();
    bool checkBalanced(const std::string& expression);
};

