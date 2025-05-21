#ifndef START_H
#define START_H

#define SIZE 100

// key-value 存储单元
typedef struct kv_entry
{
    char *key;
    char *value;
    struct kv_entry *next;
} KVEntry;

// 哈希表主题
typedef struct
{
    KVEntry **buckets; // 哈希表的桶数组
    int capacity;      // 哈希表的总容量
    int size;          // 当前存储的元素个数
} HashTable;

// 全局数据库实例
typedef struct
{
    HashTable *ht;
    int fd; // 监听socket描述符
} SimpleDB;

#endif