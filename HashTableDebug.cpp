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
    ht.remove("world");
    ht["hello"] = 547;

    return 0;
}
