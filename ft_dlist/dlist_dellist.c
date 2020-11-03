#include "dlist.h"

void	dlist_dellist(t_dlist **list, void (*del)(void *, size_t))
{
	t_dlistnode	*mover;

	mover = (*list)->base;
	while (mover->next != (*list)->base)
	{
		mover->next = mover->next->next;
		dlist_delnode(&(mover->next->prev), del);
	}
	free(mover);
	free(*list);
	*list = NULL;
}
