/**
 * HashTableDebug.cpp
 *
 * Write your tests in this file
 */
#include <iostream>
#include "HashTable.h"

using namespace std;

int main() {

    HashTable ht;

    ht.insert("world",3);
    ht.insert("hello", 2);

    cout << ht.size() << endl;
    cout << ht.capacity() << endl;
    vector<string> keys = ht.keys();
    size_t size = keys.size();
    for (size_t i = 0; i < size; i++) {
        cout << keys[i] << endl;
    }

    return 0;
}
