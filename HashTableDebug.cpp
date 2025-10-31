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

    optional<size_t> got = ht.get("void");

    return 0;
}
