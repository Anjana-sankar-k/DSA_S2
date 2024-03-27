#include "Linkedlist.cpp"

template<typename T>
void handleMenu() {
    LinkedList<T> list;
    char choice;
    T element;
    int position;

    do {
        cout << "\n------- Menu -------" << endl;
        cout << "a. Insertion at Beginning" << endl;
        cout << "b. Insertion at End" << endl;
        cout << "c. Insertion at a specified position" << endl;
        cout << "d. Deletion from Beginning" << endl;
        cout << "e. Deletion from End" << endl;
        cout << "f. Deletion from a specified position" << endl;
        cout << "g. Display" << endl;
        cout << "h. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'a':
                cout << "Enter element to insert at beginning: ";
                cin >> element;
                list.insert_at_beginning(element);
                break;
            case 'b':
                cout << "Enter element to insert at end: ";
                cin >> element;
                list.insert_at_end(element);
                break;
            case 'c':
                cout << "Enter element to insert: ";
                cin >> element;
                cout << "Enter position to insert: ";
                cin >> position;
                list.insert_at_position(element, position);
                break;
            case 'd':
                list.delete_from_beginning();
                break;
            case 'e':
                list.delete_from_end();
                break;
            case 'f':
                cout << "Enter position to delete: ";
                cin >> position;
                list.delete_from_position(position);
                break;
            case 'g':
                cout << "Linked List: ";
                list.display();
                break;
            case 'h':
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 'h');
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
