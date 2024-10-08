#include <iostream>
using namespace std;

class PriorityQueue {
private:
    int arr[100];  // Array to store elements
    int size;      // Current number of elements in the priority queue

public:
    PriorityQueue() {
        size = 0;
    }

    void insert(int value) {
        if (size == 100) {
            cout << "Priority Queue is full\n";
            return;
        }
        arr[size] = value;
        size++;
    }

    int getHighestPriority() {
        if (size == 0) {
            cout << "Priority Queue is empty\n";
            return -1;
        }
        int maxIndex = 0;
        for (int i = 1; i < size; i++) {
            if (arr[i] > arr[maxIndex]) {
                maxIndex = i;
            }
        }
        return arr[maxIndex];
    }

    void deleteHighestPriority() {
        if (size == 0) {
            cout << "Priority Queue is empty\n";
            return;
        }
        int maxIndex = 0;
        for (int i = 1; i < size; i++) {
            if (arr[i] > arr[maxIndex]) {
                maxIndex = i;
            }
        }
        for (int i = maxIndex; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    void display() {
        if (size == 0) {
            cout << "Priority Queue is empty\n";
            return;
        }
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;
    
    pq.insert(10);
    pq.insert(30);
    pq.insert(20);
    pq.insert(50);

    cout << "Priority Queue: ";
    pq.display();

    cout << "Highest Priority Element: " << pq.getHighestPriority() << endl;
    
    pq.deleteHighestPriority();
    cout << "After Deleting Highest Priority Element: ";
    pq.display();

    return 0;
}
