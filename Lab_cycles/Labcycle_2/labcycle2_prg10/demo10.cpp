#include "bracket.cpp"



int main() {
    BracketFix b;
    string expression;
    cout << "Enter an expression containing brackets: ";
    getline(cin, expression);
    if (b.checkBalanced(expression)) {
        cout << "The expression is balanced." << endl;
    } else {
        cout << "The expression is not balanced." << endl;
    }
    return 0;
}
