#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	if (*list == NULL || (*list)->next == NULL)
		return;

	listint_t *sorted = NULL;
	listint_t *current = *list;

	while (current != NULL)
	{
		listint_t *nextNode = current->next;
		sorted = insert(sorted, current);
		current = nextNode;
	}

	*list = sorted;
}

listint_t *insert(listint_t *sorted, listint_t *node)
{
	if (sorted == NULL)
	{
		node->prev = NULL;
		node->next = NULL;
		return node;
	}

	if (node->n <= sorted->n)
	{
		node->next = sorted;
		sorted->prev = node;
		node->prev = NULL;
		return node;
	}

	listint_t *current = sorted;

	while (current->next != NULL && node->n > current->next->n)
	{
		current = current->next;
	}

	node->next = current->next;
	node->prev = current;

	if (current->next != NULL)
		current->next->prev = node;

	current->next = node;

	return (sorted);
}
