#include "dlist.h"

void	dlist_pop_back(t_dlist *list)
{
	if (list->size > 0)
	{
		dlist_unlink(list->base->prev);
		list->size--;
	}
}
