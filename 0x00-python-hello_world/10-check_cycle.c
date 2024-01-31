#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	if (!list)
		return (0);
	listint_t *first_ptr = list->next;
	listint_t *second_ptr = list;

	while (first_ptr && second_ptr && first_ptr->next)
	{
		if (first_ptr == second_ptr)
			return (1);
		first_ptr = first_ptr->next->next;
		second_ptr = second_ptr->next;
	}
	return (0);
}
