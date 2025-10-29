/**
 * HashTable.h
 */

#include <optional>
#include <string>
#include <ostream>
#include <vector>

using namespace std;

enum class bucketType {NORMAL, ESS, EAR};

class HashTableBucket {

    public:

        bucketType type;
        std::string key;
        size_t value;

        HashTableBucket();


        HashTableBucket(const std::string& key, const size_t& value);

        void load(const std::string& key, const size_t& value);
        bool isEmpty() const;
        friend ostream& operator<<(ostream& os, const HashTableBucket& bucket);

};

class HashTable {

public:

        vector <size_t> offsets;
        vector <HashTableBucket> table;
        size_t filled;
        size_t max;

        HashTable(size_t cap = 8);

        bool insert(const std::string& key, const size_t& value);
        bool remove(const std::string& key);
        bool contains(const string& key) const;
        optional<size_t> get(const string& key) const;
        size_t& operator[](const string& key);
        vector<std::string> keys() const;
        double alpha() const;
        size_t capacity() const;
        size_t size() const;
        friend ostream& operator<<(ostream& os, const HashTable& ht);
        size_t probe(size_t home, int i) const;

};