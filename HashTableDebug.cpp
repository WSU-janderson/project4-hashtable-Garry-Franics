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
    ht.insert("garbe", 4);
    ht.insert("value", 5);
    ht.insert("reszie", 6);


    return 0;
}