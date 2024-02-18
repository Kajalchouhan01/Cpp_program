#include <iostream>
using namespace std;

class ary {
private:
    int size;
    int *array;

public:
    ary() {
        size = 0;
        cout << "Welcome to array CRUD operations." << endl;
    }

    ary(int sz) {
        size = sz;
        array = new int[size];
        cout << "Welcome to array CRUD operations." << endl;
    }

    ~ary() {
        delete[] array;
    }

    void insert() {
        if (size >= 100) {
            cout << "Array is full. Cannot insert more elements." << endl;
            return;
        }
        cout << "Enter the value to insert: ";
        cin >> array[size];
        size++;
        cout << "Value inserted successfully." << endl;
    }

    void update() {
        int index;
        cout << "Enter the index to update: ";
        cin >> index;
        if (index >= 0 && index < size) {
            cout << "Enter the new value: ";
            cin >> array[index];
            cout << "Value updated successfully." << endl;
        } else {
            cout << "Invalid index. Update failed." << endl;
        }
    }

    void remove() {
        int index;
        cout << "Enter the index to remove: ";
        cin >> index;
        if (index >= 0 && index < size) {
            for (int i = index; i < size - 1; i++) {
                array[i] = array[i + 1];
            }
            size--;
            cout << "Value removed successfully." << endl;
        } else {
            cout << "Invalid index. Removal failed." << endl;
        }
    }

    void search() {
        int val;
        cout << "Enter the value to search: ";
        cin >> val;
        bool found = false;
        for (int i = 0; i < size; i++) {
            if (array[i] == val) {
                cout << "Value found at position " << i << "." << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "Value not found." << endl;
        }
    }

    void display() {
        cout << "Array elements:";
        for (int i = 0; i < size; i++) {
            cout << " " << array[i];
        }
        cout << endl;
    }
};

int main() {
    int s;
    cout << "Enter array size: ";
    cin >> s;

    ary a(s);

    int choice;
    do {
        cout << "Menu:\n1. Insert\n2. Update\n3. Remove\n4. Search\n5. Display\n6. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                a.insert();
                break;
            case 2:
                a.update();
                break;
            case 3:
                a.remove();
                break;
            case 4:
                a.search();
                break;
            case 5:
                a.display();
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
