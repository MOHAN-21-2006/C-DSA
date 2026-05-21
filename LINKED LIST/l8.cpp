#include <iostream>
//delete first node
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

// Display function
void display(Node* head) {

    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";
}

int main() {

    // Create nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Assign data
    head->data = 10;
    second->data = 20;
    third->data = 30;

    // Link nodes
    head->next = second;
    second->next = third;
    third->next = NULL;

    cout << "Before Deletion:\n";
    display(head);

    // Delete first node
    head = head->next;

    cout << "\n\nAfter Deletion:\n";
    display(head);

    return 0;
}