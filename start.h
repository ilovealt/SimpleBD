#ifndef START_H
#define START_H

#define SIZE 100

#endif

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

/**
 * 创建一个新的哈希表
 * @param capacity 哈希表的初始容量
 * @return 返回一个指向新创建的哈希表的指针
 */
SimpleDB *create_db(int capacity);
// void destroy_db(SimpleDB *db);
// void insert(SimpleDB *db, const char *key, const char *value);
// char* search(SimpleDB *db, const char *key);
// void delete(SimpleDB *db, const char *key);
// void print_db(SimpleDB *db);
// void clear_db(SimpleDB *db);
// void start_server(SimpleDB *db, int port);
// void stop_server(SimpleDB *db);
// void handle_signal(int signal);
// void handle_client(int client_fd, SimpleDB *db);