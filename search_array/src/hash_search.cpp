#include "hash_search.hpp"

HashTable::HashTable(int size) {
    this->size = size > 0 ? size : 1;
    table.resize(this->size);
}

int HashTable::hashFunction(int value) const {
    const int index = value % size;
    return index < 0 ? index + size : index;
}

void HashTable::insert(int value) {
    int index = hashFunction(value);
    table[index].push_back(value);
}

bool HashTable::search(int target) const {
    int index = hashFunction(target);
    for (int value : table[index]) {
        if (value == target) {
            return true;
        }
    }
    return false;
}

/*
 * Big O (n la so phan tu):
 * - Time: Tao hash table O(n); moi lan insert hoac lookup trung binh O(1).
 *   Lookup xau nhat O(n) khi tat ca gia tri roi vao cung mot bucket.
 * - Space: O(n).
 *   Hash table luu cac gia tri trong cac bucket va tong so gia tri la n.
 */
