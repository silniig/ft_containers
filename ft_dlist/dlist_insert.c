#include "dlist.h"

t_dlistnode	*dlist_insert(t_dlist *list, t_dlistnode *before,
		const void *data, size_t size)
{
	t_dlistnode	*insert;

	insert = dlist_newnode(data, size);
	if (!insert) {
		return (NULL);
	}
	link_after(insert, before->prev);
	list->size++;
	return (insert);
}
