#ifndef HASH_TABLES_H
#define HASH_TABLES_H

/* Struct for hash table nodes */
typedef struct hash_node_s {
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/* Struct for the hash table */
typedef struct hash_table_s {
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

/* Function prototypes */
hash_table_t *hash_table_create(unsigned long int size);

/* Add more function prototypes as needed */

#endif /* HASH_TABLES_H */
