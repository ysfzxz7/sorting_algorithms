#ifndef _SORT_H_
#define _SORT_H_


/* ================ Headers =================*/
#include <stdlib.h>
#include <stdio.h>


/* ============== Structs ============== */

/**
 * struct listint_s - Dbly linked list node
 *
 * @n: int stored in the node
 * @prev: Ptr to the prv node
 * @next: Ptr to the next node
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;


/* =============== Prototypes ==============*/

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);

#endif /* _SORT_H_ */
