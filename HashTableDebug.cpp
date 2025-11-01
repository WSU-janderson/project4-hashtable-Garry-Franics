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

    cout << ht;

    return 0;
}