#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *1stptr = list;
	listint_t *2ndptr = list->next;

	if (!list)
		return (0);

	while (1stptr && 2ndptr && 2ndptr->next)
	{
		if (1stptr == 2ndptr)
			return (1);

		1stptr = 1stptr->next;
		2ndptr = 2ndptr->next->next;
	}

	return (0);
}
