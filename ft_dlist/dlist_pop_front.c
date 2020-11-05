#include "dlist.h"

void	dlist_pop_front(t_dlist *list)
{
	if (list->size > 0)
	{
		dlist_unlink(list->base->next);
		list->size--;
	}
}
