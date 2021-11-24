#include "dlist.h"

void	dlist_pop_back(t_dlist *list, void (*del)(void *, size_t))
{
	t_dlistnode	*node;
	if (list->size > 0)
	{
		node = list->base->prev;
		dlist_unlink(node);
		dlist_delnode(&node, del);
		list->size--;
	}
}
