#include "dlist.h"

void	*dlist_back(t_dlist *list)
{
	if (list->base->prev == list->base)
		return (NULL);
	return (list->base->prev->data);
}
