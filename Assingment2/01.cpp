/*
Create a class that behaves like a simple list in Python. It should support adding,
removing, displaying, and getting the size of the list. Explain why you used con-
structors and any operator overloading (if used).
*/

#include<iostream>
#include<string>

using namespace std;

class SimpleList {
private:
    int* data;         // Pointer to the heap-allocated array
    int currentSize;   // Number of elements currently in the list
    int capacity;      // Total allocated memory (how many elements we *can* hold)

    
    void resize() {
        int newCapacity = (capacity == 0) ? 1 : capacity * 2;
        int* newData = new int[newCapacity];
        if (data != nullptr) {
            for (int i = 0; i < currentSize; ++i) {
                newData[i] = data[i];
            }
        }
        if (data != nullptr) {
            delete[] data;
        }
        data = newData;
        capacity = newCapacity;
    }

public:

    SimpleList() {
        data = nullptr;  // Start with no memory allocated
        currentSize = 0;
        capacity = 0;
    }

    ~SimpleList() {
        // Free the allocated memory to prevent leaks
        if (data != nullptr) {
            delete[] data;
        }
    }

    void add(int value) {
        // If the list is full, we need to grow it first
        if (currentSize == capacity) {
            resize();
        }
        // Add the new element at the end and increment the size
        data[currentSize] = value;
        currentSize++;
    }

    void remove(int index) {

        for (int i = index; i < currentSize - 1; ++i) {
            data[i] = data[i + 1];
        }
        currentSize--;
    }

    void display() {
        cout << "[";
        for (int i = 0; i < currentSize; ++i) {
            cout << data[i];
            if (i < currentSize - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    int getSize() {
        return currentSize;
    }

};

/**
 * @brief Demonstration of the SimpleList class
 */
int main() {
    SimpleList myList;

    myList.add(10);
    myList.add(20);
    myList.add(30);

    cout << "List: ";
    myList.display();
    cout << "Size: " << myList.getSize() << endl;

    myList.add(40);
    myList.add(50);
    cout << "List: ";
    myList.display();
    cout << "Size: " << myList.getSize() << endl;

    cout << "\nRemoving element at index 2 (value 30)..." << endl;
    myList.remove(2);
    cout << "List: ";
    myList.display();
    cout << "Size: " << myList.getSize() << endl;

    return 0;
}