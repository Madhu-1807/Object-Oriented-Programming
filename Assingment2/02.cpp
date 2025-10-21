/*
Design a class that mimics a dictionary or map functionality — where you
can store key-value pairs, search for a key, and display all pairs. Explain why
encapsulation is important in this implementation.
*/

#include<iostream>
#include<string>

using namespace std;

template <typename TKey, typename TValue>
class SimpleMap {
private:

    struct Pair {
        TKey key;
        TValue value;
    };

    static const int MAX_SIZE = 100;

    Pair data[MAX_SIZE]; 
    int currentSize;     

    
    int findKeyIndex(TKey key) {
        for (int i = 0; i < currentSize; ++i) {
            // Assumes TKey supports the '==' operator
            if (data[i].key == key) {
                return i; // Found
            }
        }
        return -1; // Not found
    }

public:
    
    SimpleMap() {
        currentSize = 0;
    }

    ~SimpleMap() {}

    void set(TKey key, TValue value) {
        int index = findKeyIndex(key);

        if (index != -1) {
            // Key already exists: Update the value
            data[index].value = value;
        } else {
            // Key is new: Add it
            if (currentSize >= MAX_SIZE) {
                cerr << "Error: Map is full." << endl;
                return;
            }
            data[currentSize].key = key;
            data[currentSize].value = value;
            currentSize++;
        }
    }

    bool get(TKey key, TValue& outValue) {
        int index = findKeyIndex(key);
        if (index != -1) {
            outValue = data[index].value; // Write the value to the out-parameter
            return true;
        }
        return false; // Key not found
    }

    void display() {
        if (currentSize == 0) {
            cout << "{}" << endl;
            return;
        }

        cout << "{" << endl;
        for (int i = 0; i < currentSize; ++i) {
            cout << "  " << data[i].key << ": " << data[i].value;
            // Assumes TKey and TValue support '<<' for cout
            if (i < currentSize - 1) {
                cout << ",";
            }
            cout << endl;
        }
        cout << "}" << endl;
    }
};

int main() {
    // We'll map student IDs (int) to their names (const char*)
    SimpleMap<int, const char*> studentMap;

    cout << "--- Adding students ---" << endl;
    studentMap.set(101, "Alice");
    studentMap.set(102, "Bob");
    studentMap.set(205, "Charlie");
    studentMap.display();

    cout << "\n--- Updating student 102 ---" << endl;
    studentMap.set(102, "Robert");
    studentMap.display();

    cout << "\n--- Searching for students ---" << endl;
    const char* name;

    if (studentMap.get(205, name)) {
        cout << "Found key 205. Name: " << name << endl;
    } else {
        cout << "Key 205 not found." << endl;
    }

    if (studentMap.get(999, name)) {
        cout << "Found key 999. Name: " << name << endl;
    } else {
        cout << "Key 999 not found." << endl;
    }

    return 0;
}