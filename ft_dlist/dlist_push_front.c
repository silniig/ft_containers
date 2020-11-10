#include "dlist.h"

int	dlist_push_front(t_dlist *list, const void *data, size_t size)
{
	t_dlistnode	*in;

	in = dlist_newnode(data, size);
	if (!in)
		return (-1);
	link_after(in, list->base);
	list->size++;
	return (0);
}
