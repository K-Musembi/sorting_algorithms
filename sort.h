#ifndef SORT_H
#define SORT_H

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

#include <stddef.h>
#include <stdlib.h>

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap(listint_t **temp, listint_t **nxt);
void rev_swap(listint_t **nxt, listint_t **back);
void swap_array(int *one, int *two);
int partition(int *array, int high, size_t size);
void merge(int *array, size_t mid, size_t high);
void merge_sort(int *array, size_t size);
void swap_sort(int *one, int *two);

#endif
