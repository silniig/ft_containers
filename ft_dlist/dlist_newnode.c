#include "dlist.h"

t_dlistnode	*dlist_newnode(const void *data, size_t size)
{
	t_dlistnode *res;

	res = (t_dlistnode *)malloc(sizeof(t_dlistnode));
	if (!res)
		return (NULL);
	if (size == 0)
		return (res);
	res->data = malloc(size);
	if (!res->data)
	{
		free(res);
		return (NULL);
	}
	ft_memcpy(res->data, data, size);
	res->prev = NULL;
	res->next = NULL;
	res->size = size;
	return (res);
}
