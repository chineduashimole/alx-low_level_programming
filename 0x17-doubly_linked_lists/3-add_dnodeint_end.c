#include "lists.h"

/**
 * add_dnodeint_end - this function adds a new node at the end
 * of a dlistint_t list
 *
 * @head: th ehead of the list
 * @n: thee value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *neww;

	neww = malloc(sizeof(dlistint_t));
	if (neww == NULL)
		return (NULL);

	neww->n = n;
	neww->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = neww;
	}
	else
	{
		*head = neww;
	}

	neww->prev = h;

	return (neww);
}
