#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a node to the start of the list
 * @head: address of pointer to head node
 * @str: str field of node
 * Return: size of list
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_head = malloc(sizeof(list));
if (new_head == NULL)
{
return (NULL);
}
new_head->str = strdup(str);
if (new_head->str == NULL)
{
free(new_head);
return (NULL);
}
new_head->len = strlen(str);
new_head->next = *head;
*head = new_head;
return (new_head);
}
