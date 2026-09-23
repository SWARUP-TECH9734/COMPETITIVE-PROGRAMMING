// Problem 7: Implement a simple hash table using linear probing.

#include <iostream>
using namespace std;

const int SIZE = 10;

void insert(int table[], int key) {
    int index = key % SIZE;

    for (int i = 0; i < SIZE; i++) {
        int position = (index + i) % SIZE;

        if (table[position] == -1) {
            table[position] = key;
            return;
        }
    }

    cout << "Hash table is full. Cannot insert " << key << endl;
}

void display(int table[]) {
    cout << "\nHash Table:\n";

    for (int i = 0; i < SIZE; i++) {
        cout << i << " -> ";

        if (table[i] == -1)
            cout << "EMPTY";
        else
            cout << table[i];

        cout << endl;
    }
}

int main() {
    int table[SIZE];

    for (int i = 0; i < SIZE; i++) {
        table[i] = -1;
    }

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the elements:\n";

    for (int i = 0; i < n; i++) {
        int key;
        cin >> key;
        insert(table, key);
    }

    display(table);

    return 0;
}
