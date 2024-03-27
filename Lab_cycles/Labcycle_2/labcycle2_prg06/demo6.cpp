#include "LL_dequeue.cpp"

template<typename T>
void handleMenu() {
    LinkedListDEQUEUE<T> dequeue;
    char choice;
    T element;
    int position;

    do {
        cout << "\n------- Menu -------" << endl;
        cout << "a. Insert elements to the Front of the queue" << endl;
        cout << "b. Insert elements to the Rear of the queue" << endl;
        cout << "c. Delete elements from the Front of the queue" << endl;
        cout << "d. Delete elements from the Rear of the queue" << endl;
        cout << "e. Display" << endl;
        cout << "f. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'a': {
                cout << "Enter element to insert at front: ";
                cin >> element;
                dequeue.insertFront(element);
                break;
            }
            case 'b': {
                cout << "Enter element to insert at rear: ";
                cin >> element;
                dequeue.insertRear(element);
                break;
            }
            case 'c': {
                if (!dequeue.isEmpty()) {
                    cout << "Deleted element from front: " << dequeue.deleteFront() << endl;
                } else {
                    cerr << "Underflow: The queue is empty." << endl;
                }
                break;
            }
            case 'd': {
                if (!dequeue.isEmpty()) {
                    cout << "Deleted element from rear: " << dequeue.deleteRear() << endl;
                } else {
                    cerr << "Underflow: The queue is empty." << endl;
                }
                break;
            }
            case 'e': {
                dequeue.display();
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
