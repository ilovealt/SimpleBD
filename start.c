#include <stdio.h>
#include <stdlib.h>
#include "start.h"

SimpleDB *create_db(int capacity)
{
    SimpleDB *db = malloc(sizeof(SimpleDB));
    db->ht = malloc(sizeof(HashTable));
    db->ht->capacity = capacity;
    db->ht->buckets = calloc(capacity, sizeof(KVEntry *));
    return db;
}

int main(int argc, char const *argv[])
{
    printf("Hello, World!\n");
    printf("%d\n", SIZE);
    return 0;
}
