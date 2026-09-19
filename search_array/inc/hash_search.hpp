#pragma once

#include <vector>

class HashTable {
private:
    std::vector<std::vector<int>> table;
    int size;

public:
    explicit HashTable(int size);
    int hashFunction(int value) const;
    void insert(int value);
    bool search(int target) const;
};
