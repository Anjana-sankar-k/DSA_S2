#include "playlist.cpp"

int main() {

    Song* head = new Song("cruel summer", "Taylor Swift", 180, "Pop");
    head->next = new Song("Rush hour", "Crush  ", 240, "K-RnB");
    head->next->next = new Song("Don't wanna cry", "Seventeen", 200, "Kpop");
    head->next->next->next = new Song("Break my soul", "Beyonce", 220, "Alternative");
    head->next->next->next->next = new Song("Spring day", "BTS    ", 220, "Kpop");

    cout << "Original Playlist:" << endl;
    printPlaylist(head);

    mergeSort(&head, "title");
    cout << "\nSorted Playlist by Title:" << endl;
    printPlaylist(head);

    mergeSort(&head, "artist");
    cout << "\nSorted Playlist by Artist:" << endl;
    printPlaylist(head);

    mergeSort(&head, "duration");
    cout << "\nSorted Playlist by Duration:" << endl;
    printPlaylist(head);

    mergeSort(&head, "genre");
    cout << "\nSorted Playlist by Genre:" << endl;
    printPlaylist(head);

    while (head) {
        Song* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
