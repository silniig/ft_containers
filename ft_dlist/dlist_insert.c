#include "dlist.h"

int	dlist_insert(t_dlistnode *before, const void *data, size_t size)
{
	t_dlistnode	*insert;

	insert = dlist_newnode(data, size);
	if (!insert) {
		return (-1);
	}
	link_after(insert, before->prev);
	return (1);
}
