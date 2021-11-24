#include "dlist.h"

void	dlist_pop_front(t_dlist *list, void (*del)(void *, size_t))
{
	t_dlistnode	*node;
	if (list->size > 0)
	{
		node = list->base->next;
		dlist_unlink(node);
		dlist_delnode(&node, del);
		list->size--;
	}
}
