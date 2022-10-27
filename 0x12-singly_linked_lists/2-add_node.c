#include "lists.h"

/**
* add_node - add a new node at the beginning of the list_t list
* @head: pointer to pointer of head
* @str: string
* Return: the address of the new element or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
	return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
