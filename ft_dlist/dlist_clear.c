#include "dlist.h"

void	dlist_clear(t_dlist *list, void (*del)(void *, size_t))
{
	while (!dlist_empty(list))
	{
		dlist_pop_back(list, del);
	}
}
