#include "Dlinked.cpp"

template<typename T, template<typename> class List>
void handleMenu() {
    T element;
    int position;
    List<T> list;

    char choice;
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
    char listchoice;
    cout << "Choose the type of Linked List: " << endl;
    cout << "a. Doubly Linked List" << endl;
    cout << "b. Circular Linked List" << endl;
    cout << "c. Circular Doubly Linked List" << endl;
    cout << "Enter your choice: ";
    cin >> listchoice;

    int type;
    cout << "Enter the data type of the List (1 for int, 2 for double, 3 for char): ";
    cin >> type;

    switch (type) {
        case 1 :
            if (listchoice == 'a')
                handleMenu<int, DoublyLinkedList>();
            else if (listchoice == 'b')
                handleMenu<int, CircularLinkedList>();
            else if (listchoice == 'c')
                handleMenu<int, CircularDoublyLinkedList>();
            else
                cout << "Invalid choice for Linked List type." << endl;
            break;
        case 2 :
            if (listchoice == 'a')
                handleMenu<double, DoublyLinkedList>();
            else if (listchoice == 'b')
                handleMenu<double, CircularLinkedList>();
            else if (listchoice == 'c')
                handleMenu<double, CircularDoublyLinkedList>();
            else
                cout << "Invalid choice for Linked List type." << endl;
            break;
        case 3 :
            if (listchoice == 'a')
                handleMenu<char, DoublyLinkedList>();
            else if (listchoice == 'b')
                handleMenu<char, CircularLinkedList>();
            else if (listchoice == 'c')
                handleMenu<char, CircularDoublyLinkedList>();
            else
                cout << "Invalid choice for Linked List type." << endl;
            break;
        default:
            cout << "Invalid data type. Please try again." << endl;
    }
    return 0;
}
