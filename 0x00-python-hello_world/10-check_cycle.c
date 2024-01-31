#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *1stptr = list;
	listint_t *2ndptr = list;

	if (!list)
		return (0);

	while (1stptr && 2ndptr)
	{
		if (1strptr == 2ndptr)
			return (1);

		1stptr = 1sptr->next;
		2ndptr = 2ndptr->next->next;
	}
	return (0);
}
