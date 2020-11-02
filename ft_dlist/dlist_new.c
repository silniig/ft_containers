#include "dlist.h"

t_dlist	*dlist_new(void) {
	t_dlist	*res;

	res = (t_dlist *)malloc(sizeof(t_dlist));
	if (!res)
		return (NULL);
	res->base = dlist_newnode(NULL, 0);
	if (!res->base)
	{
		free(res);
		return (NULL);
	}
	res->size = 0;
	res->base->prev = res->base;
	res->base->next = res->base;
	return (res);
}
