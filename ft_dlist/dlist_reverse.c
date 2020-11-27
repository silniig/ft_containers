#include "dlist.h"

void	dlist_reverse(t_dlist *list)
{
	t_dlistnode	*begin;
	t_dlistnode	*end;
	t_dlistnode	*mover;

	begin = dlist_begin(list);
	end = dlist_end(list);
	while (begin != end)
	{
		mover = begin->next;
		begin->next = begin->prev;
		begin->prev = mover;
		begin = mover;
	}
	mover = list->base->next;
	list->base->next = list->base->prev;
	list->base->prev = mover;
}
