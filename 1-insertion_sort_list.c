#include "sort.h"

int check_swap(listint_t **a, listint_t **b);
void swap(listint_t **a, listint_t **b);

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the insertion sort algorithm
 * @list: a pointer to the first node of a doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	/*int node_counter = 1, i;*/
	listint_t *current_node;

	current_node = *list;
	while (current_node != NULL)
	{
		printf("done\n");
		if (current_node->n > current_node->next->n)
		{
			swap(&current_node, &current_node->next);
			*list = current_node->next;
			print_list(*list);
			break;
		}
		/*printf("done\n");
		current_node = *list;
		current_node = current_node->prev;
		while (current_node != NULL)
		{
			printf("done2\n");
			if (current_node->n > current_node->next->n)
			{
				swap(&current_node, &current_node->next);
				*list = current_node->next;
				print_list(*list);
			}
			current_node = current_node->prev;
		}
		node_counter++;
		for (i = 0; i < node_counter; i++)
		{
			current_node = current_node->next;
		}*/
	}
}

/**
 * swap - swaps the position of two nodes in a doubly linked list
 * @a; First node to be swapped
 * @b: Second node to be swapped
 */
void swap(listint_t **a, listint_t **b)
{
	listint_t *temp;
	(*a)->next = (*b)->next;
	(*b)->next = *a;

	if ((*a)->next != NULL)
		(*a)->next->prev = *a;
	if ((*b)->next != NULL)
		(*b)->next->prev = *b;

	temp = (*a)->prev;
	(*a)->prev = (*b);
	(*b)->prev = temp;

	if ((*a)->prev != NULL)
		(*a)->prev->next = *a;
	if ((*b)->prev != NULL)
		(*b)->prev->next = *b;
}

/**
 * check_swap - checks if swap is needed and swaps the position of two nodes in a doubly linked list
 * @a: First node to be swapped
 * @b: Second node to be swapped
 */
int check_swap(listint_t **a, listint_t **b)
{
	int if_swap = 0;

	if ((*a)->n > (*b)->n)
	{	
		/*printf("done1\n");
		(*b)->prev = (*a)->prev;
		if ((*a)->prev != NULL)
		{
			current_node = (*a)->prev;
			current_node->next = (*b);
			printf("done2\n");
		}
		(*a)->next = (*b)->next;
		printf("done3\n");
		if ((*b)->next != NULL)
		{
			printf("b-next not null\n");
			current_node = (*b)->next;
			printf("done4\n");
			current_node->prev = (*a);
			printf("done5\n");
		}
		printf("done6\n");
		(*b)->next = *a;
		printf("done7\n");
		(*a)->prev = (*b);*/
		if_swap = 1;
		(*a)->next = (*b)->next;
		printf("done1\n");
		(*b)->next = *a;
		printf("done2\n");
		(*b)->prev = (*a)->prev;
		printf("done3\n");
		(*a)->prev = *b;
		printf("done4\n");

	}
	return (if_swap);
}
