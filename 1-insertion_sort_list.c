#include "sort.h"

void swap(listint_t **a, listint_t **b);
int len_list(listint_t **list);

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the insertion sort algorithm
 * @list: Doubly linked list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	int node_count = 0, list_len, i;

	list_len = len_list(&(*list));
	printf("%d\n", list_len);
	while(node_count < list_len)
	{
		if (node_count > 0)
		{
			for (i = 0; i < node_count; i++)
			{
				(*list) = (*list)->next;
			}
		}
		if ((*list)->n > (*list)->next->n)
		{
			swap(&(*list), &(*list)->next);
			print_list(*list);
			printf("FFF\n");
		}
		printf("%d, %d\n", (*list)->n, (*list)->next->n);
		if ((*list)->prev != NULL)
		{
			while (!list)
			{
				(*list) = (*list)->prev;
				if ((*list)->n > (*list)->next->n)
				{
					swap(&(*list), &(*list)->next);
					print_list(*list);
				}
			}
		}
		node_count++;
	}
}

/**
 * swap - Swaps nodes in doubly linked list
 * @a: first node to be swapped
 * @b: second node to be swapped
 */
void swap(listint_t **a, listint_t **b)
{
	(*b)->prev = (*a)->prev;
	(*a)->prev = (*b);
	(*a)->next = (*b)->next;
	(*b)->next = (*a);
}

/**
 * len_list - finds the length of a list
 * @list: list whose length is to be found
 *
 * Return: the length of the list
 */
int len_list(listint_t **list)
{
	listint_t *head = (*list);
	int count = 0;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}

	return (count);
}
