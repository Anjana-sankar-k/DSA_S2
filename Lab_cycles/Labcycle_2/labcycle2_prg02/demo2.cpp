#include "linked_list.cpp"

using namespace std;

template<typename T>
void Handlemenu(LinkedListStack<T>& stack) {
    char choice;

    do {
        cout << "\n------- Menu -------" << endl;
        cout << "a. PUSH" << endl;
        cout << "b. POP" << endl;
        cout << "c. IS EMPTY" << endl;
        cout << "d. IS FULL" << endl;
        cout << "e. Display" << endl;
        cout << "f. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'a': {
                T value;
                cout << "Enter value to push: ";
                cin >> value;
                stack.push(value);
                break;
            }
            case 'b': {
                if (!stack.isEmpty()) {
                    cout << "Popped value: " << stack.pop() << endl;
                } else {
                    cerr << "Underflow: The stack is empty." << endl;
                }
                break;
            }
            case 'c': {
                cout << (stack.isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
                break;
            }
            case 'd': {
                cout << (stack.isFull() ? "Stack is full." : "Stack is not full.") << endl;
                break;
            }
            case 'e': {
                stack.display();
                break;
            }
            case 'f': {
                cout << "Exiting..." << endl;
                break;
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 'f');
}

int main() {
    int capacity;
    cout << "Enter maximum size of your stack: ";
    cin >> capacity;

    int stackChoice;
    cout << "Choose the data type for the stack:" << endl;
    cout << "1. Integer" << endl;
    cout << "2. Double" << endl;
    cout << "3. Character" << endl;
    cout << "Enter your choice: ";
    cin >> stackChoice;

    switch (stackChoice) {
        case 1 : {
            LinkedListStack<int> stackInt(capacity);
            Handlemenu(stackInt);
            break;
        }
        case 2 : {
            LinkedListStack<double> stackDouble(capacity);
            Handlemenu(stackDouble);
            break;
        }
        case 3 : {
            LinkedListStack<char> stackChar(capacity);
            Handlemenu(stackChar);
            break;
        }
        default:
            cout << "Invalid choice. Exiting..." << endl;
    }

    return 0;
}
