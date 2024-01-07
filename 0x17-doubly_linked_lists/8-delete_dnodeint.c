#include "lists.h"

/**
 * delete_dnodeint_at_index - this function deletes the node at the index of a
 * dlistint_t linked list
 *
 * @head: the head of the dlistint_t linked list
 * @index: the index of the new node
 * Return: 1 (if successful), -1 (if unsuccessful)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *header1;
	dlistint_t *header2;
	unsigned int a;

	header1 = *head;

	if (header1 != NULL)
		while (header1->prev != NULL)
			header1 = header1->prev;

	a = 0;

	while (header1 != NULL)
	{
		if (a == index)
		{
			if (a == 0)
			{
				*head = header1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				header2->next = header1->next;

				if (header1->next != NULL)
					header1->next->prev = header2;
			}

			free(header1);
			return (1);
		}
		header2 = header1;
		header1 = header1->next;
		a++;
	}

	return (-1);
}
