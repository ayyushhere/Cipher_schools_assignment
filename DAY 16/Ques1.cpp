#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void insertInSortedOrder(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (!head || value <= head->data) {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next && current->next->data < value) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data;
        if (current->next != nullptr) {
            cout << "->";
        }
        current = current->next;
    }
    cout << endl;
}

Node* createList(int n) {
    Node* head = nullptr;
    Node* tail = nullptr;
    
    cout << "Enter " << n << " elements in sorted order: ";
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        Node* newNode = new Node(val);
        
        if (!head) {
            head = newNode;
            tail = head;
        } else {
            tail->next = newNode;
            tail = tail->next;
        }
    }
    
    return head;
}

int main() {
    int n;
    cout << "Enter number of elements in the list: ";
    cin >> n;
    
    Node* head = createList(n);
    
    int value;
    cout << "Enter value to insert: ";
    cin >> value;
    
    insertInSortedOrder(head, value);
    
    cout << "Updated list: ";
    printList(head);
    
    return 0;
}
