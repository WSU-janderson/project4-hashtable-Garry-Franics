/**
 * HashTableDebug.cpp
 *
 * Write your tests in this file
 */
#include <iostream>

#include "HashTable.h"

int main() {

    HashTable ht(4);

    ht.insert("3", 1);
    ht.insert("hello", 2);
    ht.insert("world", 3);
    ht.insert("hello", 2);

    return 0;
}
