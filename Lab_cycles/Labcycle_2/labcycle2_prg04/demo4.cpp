#include "LL_queue.cpp"

template<typename T>
void handleMenu() {
    LinkedListQueue<T> queue;
    char choice;
    T element;
    int position;

    do {
        cout << "\n------- Menu -------" << endl;
        cout << "a. Insert elements to the Rear of the queue" << endl;
        cout << "b. Delete elements from the Front of the queue" << endl;
        cout << "c. IS EMPTY" << endl;
        cout << "d. Display" << endl;
        cout << "e. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'a': {
                T element;
                cout << "Enter element to enqueue: ";
                cin >> element;
                queue.enqueue(element);
                break;
            }
            case 'b': {
                if (!queue.isEmpty()) {
                    cout << "Dequeued element: " << queue.dequeue() << endl;
                } else {
                    cerr << "Underflow: The queue is empty." << endl;
                }
                break;
            }
            case 'c': {
                cout << (queue.isEmpty() ? "Queue is empty." : "Queue is not empty.") << endl;
                break;
            }
            case 'd': {
                queue.display();
                break;
            }
            case 'e': {
                cout << "Exiting..." << endl;
                break;
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 'e');
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
