#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top;
    
public:
    Stack() {
        top = nullptr;
    }
    
    void push(int value) {
        Node* newNode = new Node(value);
        if (top == nullptr) {
            top = newNode;
        } else {
            newNode->next = top;
            top = newNode;
        }
        cout << value << " pushed to stack\n";
    }
    
    void pop() {
        if (top == nullptr) {
            cout << "Stack underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        cout << temp->data << " popped from stack\n";
        delete temp;
    }
    
    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }
    
    bool isEmpty() {
        return top == nullptr;
    }
    
    void display() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return;
        }
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    
    cout << "Top element is " << s.peek() << endl;
    
    s.pop();
    s.display();
    
    cout << "Stack empty: " << (s.isEmpty() ? "Yes" : "No") << endl;
    
    return 0;
}
