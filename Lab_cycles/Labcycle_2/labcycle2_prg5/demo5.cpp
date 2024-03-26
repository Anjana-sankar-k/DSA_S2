#include "dequeue.cpp"

template<typename T>
void handleMenu(Dequeue<T>& dequeue) {

    char choice;
    T value;
    int position;

    do {
        cout << "\n------- Menu -------" << endl;
        cout << "a. Insert elements to the Front of the queue" << endl;
        cout << "b. Insert elements to the Rear of the queue" << endl;
        cout << "c. Delete elements from Front of the queue" << endl;
        cout << "d. Delete elements from Rear of the queue" << endl;
        cout << "e. Display" << endl;
        cout << "f. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'a': {
                cout << "Enter value to add to Front of dequeue: ";
                cin >> value;
                dequeue.insertFront(value);
                break;
            }
            case 'b': {
                cout << "Enter value to add to Rear of dequeue: ";
                cin >> value;
                dequeue.insertRear(value);
                break;
            }
            case 'c': {
                if (!dequeue.isEmpty()) {
                    cout << "Deleted from Front: " << dequeue.deleteFront() << endl;
                } else {
                    cout << "Underflow: The queue is empty." << endl;
                }
                break;
            }
            case 'd': {
                if (!dequeue.isEmpty()) {
                    cout << "Deleted from Rear: " << dequeue.deleteRear() << endl;
                } else {
                    cout << "Underflow: The queue is empty." << endl;
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
    int capacity;
    cout << "Enter the capacity of the Deque: ";
    cin >> capacity;

    Dequeue<int> dequeueInt(capacity);
    Dequeue<double> dequeueDouble(capacity);
    Dequeue<char> dequeueChar(capacity);
    int data;
    cout << "Enter the data type of the Linked List (1 for int, 2 for double, 3 for char): ";
    cin >> data;

    switch (data) {
        case 1 :
            handleMenu(dequeueInt);
            break;
        case 2 :
            handleMenu(dequeueDouble);
            break;
        case 3 :
            handleMenu(dequeueChar);
            break;
        default:
            cout << "Invalid data type. Please try again." << endl;
    }

    return 0;
}
