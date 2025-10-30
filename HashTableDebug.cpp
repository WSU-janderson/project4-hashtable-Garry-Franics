/**
 * HashTableDebug.cpp
 *
 * Write your tests in this file
 */
#include <iostream>

#include "HashTable.h"

int main() {

    HashTable ht;

    ht.insert("hello", 2);
    ht.remove("hello");

    return 0;
}
