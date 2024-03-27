#include <iostream>
using namespace std;

template <class T>
class Node {
public:
    T data;
    Node* link;

    Node(T element) {
        data = element;
        link = nullptr;
    }
};

template <class T>
class LinkedList {
private:
    Node<T>* head;
    Node<T>* tail;

public:
    LinkedList();
    ~LinkedList();

    void insert_at_beginning(T element);
    void insert_at_end(T element);
    void insert_at_position(T element, int position);

    void delete_from_beginning();
    void delete_from_end();
    void delete_from_position(int position);

    void display();
};
