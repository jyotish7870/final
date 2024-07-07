#include<iostream>
using namespace std;

// Node class to represent each node in the linked list
class node {
public:
    int data;
    node* next;

    // Constructor to initialize a node with given data
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to insert a new node at the head of the linked list
void inserthead(node* &head, int data) {
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

// Function to print the elements of the linked list
void print(node* &head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create a new node with data 10
    node* n = new node(10);

    // Set the head of the linked list to the newly created node
    node* head = n;

    // Print the initial linked list
    print(head);

    // Insert a new node with data 12 at the head
    inserthead(head, 12);

    // Print the updated linked list
    print(head);

    return 0;
}
