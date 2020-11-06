#include "dlist.h"

void	*dlist_front(t_dlist *list)
{
	if (list->base->next == list->base)
		return (NULL);
	return list->base->next->data;
}
