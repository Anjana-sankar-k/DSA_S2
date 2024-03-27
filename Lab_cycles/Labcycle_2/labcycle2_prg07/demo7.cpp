#include "twoway.cpp"

template<typename T>
void handleMenu() {
    TwoWayStack<T> stack;
    char choice;
    T element;

    do {
        cout << "\n------- Menu -------" << endl;
        cout << "a. Push to Front" << endl;
        cout << "b. Push to Rear" << endl;
        cout << "c. Pop from Front" << endl;
        cout << "d. Pop from Rear" << endl;
        cout << "e. Display" << endl;
        cout << "f. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'a': {
                cout << "Enter element to push to front: ";
                cin >> element;
                stack.pushFront(element);
                break;
            }
            case 'b': {
                cout << "Enter element to push to rear: ";
                cin >> element;
                stack.pushRear(element);
                break;
            }
            case 'c': {
                if (!stack.isEmpty()) {
                    cout << "Popped element from front: " << stack.popFront() << endl;
                } else {
                    cerr << "Underflow: The stack is empty." << endl;
                }
                break;
            }
            case 'd': {
                if (!stack.isEmpty()) {
                    cout << "Popped element from rear: " << stack.popRear() << endl;
                } else {
                    cerr << "Underflow: The stack is empty." << endl;
                }
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
    int type;
    cout << "Enter the data type of the Linked List (1 for int, 2 for double, 3 for char): ";
    cin >> type;

    switch (type) {
        case 1 :
        handleMenu<int>();
            break;
        case 2 :
            handleMenu<double>();
            break;
        case 3 :
            handleMenu<char>();
            break;
        default:
            cout << "Invalid data type. Please try again." << endl;
    }

    return 0;
}
