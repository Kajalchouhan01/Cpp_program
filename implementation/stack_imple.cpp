#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack overflow! Cannot push more elements." << endl;
        } else {
            arr[++top] = value;
            cout << "Pushed " << value << " into the stack." << endl;
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow! Stack is empty." << endl;
            return -1; // Return some invalid value
        } else {
            cout << "Popped " << arr[top] << " from the stack." << endl;
            return arr[top--];
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1; // Return some invalid value
        } else {
            return arr[top];
        }
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top of the stack: " << stack.peek() << endl;

    stack.pop();
    stack.pop();
    stack.pop();

    stack.pop(); // Stack underflow

    return 0;
}
