#include "BSTops.cpp"
#include <iostream>
using namespace std;

int main() {
    BinarySearchTree<int> bst;

    // Insertion
    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);

    // Print tree
    cout << "In-order traversal of the BST: ";
    bst.printInOrder();

    // Search
    int searchValue = 40;
    cout << "Search for value " << searchValue << ": " << bst.search(searchValue) << endl;

    // Deletion
    int deleteValue = 30;
    bst.remove(deleteValue);
    cout << "After deleting " << deleteValue << ": ";
    bst.printInOrder();

    return 0;
}
