#include "lists.h"

/**
 * is_palindrome - a function to check if singly linked list is palindrome.
 * @head: store aaddress of head of signly linked list.
 *
 * Return: value 1, if it is palindrome otherwise 0.
 */
int is_palindrome(listint_t **head)
{
	listint_t *tortoise = *head;
	listint_t *hare = *head;
	listint_t *next, *current = NULL;
	listint_t *sec_half = NULL, *fst_half = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1); /* is Palindrome if list is empty */

	while (hare && hare->next)
	{
		hare = hare->next->next; /* Move hare to 2times */
		tortoise = tortoise->next; /* move tortoise 1time */
	}

	if (hare) /* If hare is not NULL but tortoise reached a half */
		tortoise = tortoise->next; /* tortoise to skip odd in a list */

	current = tortoise; /* started at second half of a list */
	next = NULL; /* Assigned to NULL to be used for making sec_half list */
	while (current)
	{
		next = current->next;
		current->next = sec_half;
		sec_half = current; /* to reverse sec_half from next to current */
		current = next; /* While current is moving to end of a list */
	}

	fst_half = *head; /* fisrt half assigned to head to control first half */
	while (sec_half) /* To check palindrome */
	{
		if (fst_half->n != sec_half->n)
			return (0); /* is not Palindrome */

		fst_half = fst_half->next;
		sec_half = sec_half->next;
	}

	return (1); /* is Palindrome */
}
