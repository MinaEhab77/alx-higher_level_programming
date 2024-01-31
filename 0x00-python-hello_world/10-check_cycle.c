#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *first_ptr, *second_ptr = list;

	if (!list)
		return (0);

	while (first_ptr && second_ptr && second_ptr->next)
	{
		first_ptr = first_ptr->next;
		second_ptr = second_ptr->next->next;

		if (first_ptr == second_ptr)
			return (1);
	}
	return (0);
}
