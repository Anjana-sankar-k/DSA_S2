#include "dequeue.cpp"

template<typename T>
void handleMenu(Dequeue<T>& dequeue) {
    char choice;
    T element;

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
                cout << "Enter element to add to Front of dequeue: ";
                cin >> element;
                dequeue.insertFront(element);
                break;
            }
            case 'b': {
                cout << "Enter element to add to Rear of dequeue: ";
                cin >> element;
                dequeue.insertRear(element);
                break;
            }
            case 'c': {
                dequeue.deleteFront();
                break;
            }
            case 'd': {
                dequeue.deleteRear();
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
