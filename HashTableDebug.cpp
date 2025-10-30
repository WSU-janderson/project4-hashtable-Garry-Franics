/**
 * HashTableDebug.cpp
 *
 * Write your tests in this file
 */
#include <iostream>
#include "HashTable.h"

int main() {

    HashTable ht;

    ht.insert("world",3);
    ht.insert("hello", 2);

    cout << ht.size() << endl;
    cout << ht.capacity() << endl;

    return 0;
}
