#ifndef HASHTABLE_H
#define HASHTABLE_H
#include<vector>
#include<string>
using namespace std;

struct HashNode{
    string name;
    int location;
};


class HashTable
{
    public:
        HashTable(int maxSize);
        virtual ~HashTable();
        void insert(HashNode);

    protected:

    private:
        vector<HashNode> element;
        int length;
};

#endif // HASHTABLE_H
