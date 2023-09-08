#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: size of the array.
 *
 * Return: If an error occurs - NULL.
 * Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *HT;
	unsigned long int i;

	HT = malloc(sizeof(hash_table_t));
	if (HT == NULL)
		return (NULL);

	HT->size = size;
	HT->array = malloc(sizeof(hash_node_t *) * size);
	if (HT->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		HT->array[i] = NULL;

	return (HT);
}
