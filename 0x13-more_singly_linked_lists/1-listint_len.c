#include "lists.h"
/**
 *listint_len - count length
 *@h: struct list pointer
 *Return: number of int len
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
