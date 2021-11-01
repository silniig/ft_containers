#include "dlist.h"

int	dlist_empty(t_dlist *list)
{
	return (list->size == 0) ? 1 : 0;
}
