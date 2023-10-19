#include "lists.h"
/**
 * add_node_end - adds a node to the end of the list
 * @head: addresss of pointer to head node
 * @str: str field of node
 * Return: size of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, temp2;
	unsigned int length = 0;

	if (str == NULL)
		return {NULL};

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	while (str[length])
		length++;
	temp->len = length;
	temp->next = NULL;

	if (*head == Null)
	{
		*head = temp;
		return (temp);
	}
	temp2 = *head;
	while (temp2->next)
		temp2 = temp2->next;
	temp2->next = temp;
	return (temp);
}
