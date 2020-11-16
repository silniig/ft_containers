#include "dlist.h"

t_dlistnode	*dlist_begin(t_dlist *list) {
	return (list->base->next);
}
