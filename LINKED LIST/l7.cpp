#include <iostream>
//iserction in middle
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;
};

// Display linked list
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
    Node* newNode = new Node();

    // Assign data
    head->data = 10;
    second->data = 20;
    third->data = 40;
    newNode->data = 30;

    // Connect original list
    head->next = second;
    second->next = third;
    third->next = NULL;

    cout << "Before Insertion:\n";
    display(head);

    // Insert 30 in middle
    second->next = newNode;
    newNode->next = third;

    cout << "\n\nAfter Insertion:\n";
    display(head);

    return 0;
}