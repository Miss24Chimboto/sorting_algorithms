#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

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


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_recurs(int *array, int left, int right, size_t size);
int partition(int *array, int left, int right, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
size_t list_length(listint_t *list);
void switch_nodes(listint_t **list, listint_t **p);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void merge_recurs(int *arr, int *array, size_t left, size_t right);
void merge_subarray(int *arr, int *array, size_t left,
		size_t middle, size_t right);
void heap_sort(int *array, size_t size);
void heap_tree(int *array, size_t s, size_t root, size_t size);
void radix_sort(int *array, size_t size);
void count_sort(int *array, size_t size, size_t lsd);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif
