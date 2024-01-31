#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list->next;


	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		if (fast == slow)
                        return (1);
		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}
