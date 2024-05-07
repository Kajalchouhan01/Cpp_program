#include <iostream>
#include <cstring>

using namespace std;

struct Task {
    string description;
    bool completed;

    Task(string desc) : description(desc), completed(false) {}
};

class TodoList {
private:
    static const int MAX_TASKS = 100;
    Task tasks[MAX_TASKS];
    int numTasks;

public:
    TodoList() : numTasks(0) {}

    void addTask(string description) {
        if (numTasks < MAX_TASKS) {
            tasks[numTasks++] = Task(description);
        } else {
            cout << "Todo list is full!" << endl;
        }
    }

    void markTaskComplete(int index) {
        if (index >= 0 && index < numTasks) {
            tasks[index].completed = true;
        } else {
            cout << "Invalid task index!" << endl;
        }
    }

    void removeTask(int index) {
        if (index >= 0 && index < numTasks) {
            for (int i = index; i < numTasks - 1; ++i) {
                tasks[i] = tasks[i + 1];
            }
            numTasks--;
        } else {
            cout << "Invalid task index!" << endl;
        }
    }

    void displayTasks() {
        cout << "Tasks:" << endl;
        for (int i = 0; i < numTasks; ++i) {
            cout << i+1 << ". ";
            if (tasks[i].completed) {
                cout << "[X] ";
            } else {
                cout << "[ ] ";
            }
            cout << tasks[i].description << endl;
        }
    }
};

int main() {
    TodoList todoList;

    todoList.addTask("Complete assignment");
    todoList.addTask("Buy groceries");
    todoList.addTask("Call mom");

    todoList.displayTasks();

    cout << "Marking task 2 as complete..." << endl;
    todoList.markTaskComplete(1);

    todoList.displayTasks();

    cout << "Removing task 1..." << endl;
    todoList.removeTask(0);

    todoList.displayTasks();

    return 0;
}
