#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table to print
 *
 * Return: key/value in the order they appear in the array of hash table
 * otherwise nothing if hash table is NULL
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int cont = 0, i = 0;

	if (ht != NULL)
	{
		printf("{");
		for (cont = 0; cont < ht->size; cont++)
		{
			node = ht->array[cont];
			while (node != NULL)
			{
				if (i != 0)
					printf(", ");
				i = 1;
				printf("'%s' : '%s'", node->key, node->value);
				node = node->next;
			}
		}

		printf("}\n");
	}
}
