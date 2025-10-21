/*
Implement all sorting algorithm (Bubble Sort, Insertion Sort, or Selection Sort)
using OOP concepts. Use a class and methods for sorting, displaying, and
inputting data. Explain why object-oriented design improves modularity here.
*/

#include<iostream>
#include<string>

using namespace std;

const int MAX_SIZE = 100; //Max size of array

class SortableArray {
private:
    int data[MAX_SIZE];
    int currentSize;

    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }

public:
    
    SortableArray() {
        currentSize = 0;
    }

    void add(int value) {
        if (currentSize < MAX_SIZE) {
            data[currentSize] = value;
            currentSize++;
        } else {
            cerr << "Error: Array is full." << endl;
        }
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

    // Sorting Algorithms

    void bubbleSort() {
        if (currentSize < 2) return; // Nothing to sort

        for (int i = 0; i < currentSize - 1; ++i) {
            bool swapped = false;
            for (int j = 0; j < currentSize - i - 1; ++j) {
                if (data[j] > data[j + 1]) {
                    swap(data[j], data[j + 1]);
                    swapped = true;
                }
            }
            // Optimization: If no elements were swapped, it's already sorted.
            if (!swapped) {
                break;
            }
        }
    }

    void insertionSort() {
        if (currentSize < 2) return;

        for (int i = 1; i < currentSize; ++i) {
            int key = data[i]; // The element to be inserted
            int j = i - 1;     // The index of the last element in the sorted part

            // Move elements of the sorted part [0..i-1] that are
            // greater than the key, one position to the right.
            while (j >= 0 && data[j] > key) {
                data[j + 1] = data[j];
                j = j - 1;
            }
            // Place the key in its correct sorted position
            data[j + 1] = key;
        }
    }

    void selectionSort() {
        if (currentSize < 2) return;

        for (int i = 0; i < currentSize - 1; ++i) {
            // Find the index of the minimum element in the unsorted part
            int min_idx = i;
            for (int j = i + 1; j < currentSize; ++j) {
                if (data[j] < data[min_idx]) {
                    min_idx = j;
                }
            }

            // Swap the found minimum element with the first
            // element of the unsorted part (if it's not already there)
            if (min_idx != i) {
                swap(data[min_idx], data[i]);
            }
        }
    }
};

/**
 * @brief Main function to demonstrate the SortableArray class.
 */
int main() {

    SortableArray arrForBubble;
    SortableArray arrForInsertion;
    SortableArray arrForSelection;

    int initialData[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7; // Number of elements

    for(int i = 0; i < n; ++i) {
        arrForBubble.add(initialData[i]);
        arrForInsertion.add(initialData[i]);
        arrForSelection.add(initialData[i]);
    }

    cout << "Original Array: ";
    arrForBubble.display(); // Diaplay any one original array

    cout << "\nSorting with Bubble Sort" << endl;
    arrForBubble.bubbleSort();
    cout << "Result: ";
    arrForBubble.display();

    cout << "\nSorting with Insertion Sort" << endl;
    arrForInsertion.insertionSort();
    cout << "Result: ";
    arrForInsertion.display();

    cout << "\nSorting with Selection Sort" << endl;
    arrForSelection.selectionSort();
    cout << "Result: ";
    arrForSelection.display();

    return 0;
}