#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class Queue {
private:
    int arr[MAX_SIZE];
    int front, rear;

public:
    Queue() : front(-1), rear(-1) {}

    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    bool isFull() {
        return (rear + 1) % MAX_SIZE == front;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue overflow! Cannot enqueue more elements." << endl;
        } else if (isEmpty()) {
            front = rear = 0;
            arr[rear] = value;
            cout << "Enqueued " << value << " into the queue." << endl;
        } else {
            rear = (rear + 1) % MAX_SIZE;
            arr[rear] = value;
            cout << "Enqueued " << value << " into the queue." << endl;
        }
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue underflow! Queue is empty." << endl;
            return -1; // Return some invalid value
        } else if (front == rear) {
            int value = arr[front];
            front = rear = -1;
            cout << "Dequeued " << value << " from the queue." << endl;
            return value;
        } else {
            int value = arr[front];
            front = (front + 1) % MAX_SIZE;
            cout << "Dequeued " << value << " from the queue." << endl;
            return value;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1; // Return some invalid value
        } else {
            return arr[front];
        }
    }
};

int main() {
    Queue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    cout << "Front of the queue: " << queue.peek() << endl;

    queue.dequeue();
    queue.dequeue();
    queue.dequeue();

    queue.dequeue(); // Queue underflow

    return 0;
}
