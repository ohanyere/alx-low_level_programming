include "hash_tables.h"

/**
* hash_table_print - function that prints a hash table
* @ht: The hash table to be printed
*
* Return: nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int n;
	unsigned char sep = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (n = 0; n < ht->size; n++)
	{
		if (ht->array[n] != NULL)
		{
			if (sep == 1)
				printf(", ");

			nd = ht->array[n];
			while (nd != NULL)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				if (nd != NULL)
					printf(", ");
			}
			sep = 1;
		}
	}
	printf("}\n");
}
