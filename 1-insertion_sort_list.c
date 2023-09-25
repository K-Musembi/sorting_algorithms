#include "sort.h"

/**
 * insertion_sort_list - sort a doubly linked list
 * @list: head pointer of list
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *nxt, *back, *head = *list;

	if (head->next)
	{
		temp = *list;
		while (temp)
		{
			nxt = temp->next;
			if (nxt && temp->n > nxt->n)
			{
				swap(&temp, &nxt);
				print_list(head);
				while (nxt)
				{
					back = nxt->prev;
					if (back && nxt->n < back->n)
					{
						rev_swap(&nxt, &back);
						if (!nxt->prev)
							*list = head = nxt;
						print_list(head);
					}
					else
						break;
				}
			}
			else
				temp = temp->next;
		}
	}
}

/**
 * swap - swap two elements in list
 * @temp: first element
 * @nxt: second element
 *
 * Return: nothing
 */
void swap(listint_t **temp, listint_t **nxt)
{
	(*temp)->next = (*nxt)->next;
	if ((*temp)->next)
		(*nxt)->next->prev = *temp;
	(*nxt)->prev = (*temp)->prev;
	if ((*nxt)->prev)
		(*temp)->prev->next = *nxt;
	(*nxt)->next = *temp;
	(*temp)->prev = *nxt;
}

/**
 * rev_swap - swap two elements in list backwards
 * @nxt: first element
 * @back: second element
 *
 * Return: nothing
 */
void rev_swap(listint_t **nxt, listint_t **back)
{
	(*nxt)->prev = (*back)->prev;
	if ((*nxt)->prev)
		(*back)->prev->next = *nxt;
	(*back)->next = (*nxt)->next;
	if ((*back)->next)
		(*nxt)->next->prev = *back;
	(*nxt)->next = *back;
	(*back)->prev = *nxt;
}
