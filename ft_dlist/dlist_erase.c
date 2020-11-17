#include "dlist.h"

t_dlistnode	*dlist_erase(t_dlist *list, t_dlistnode *pos,
		void (*del)(void *, size_t))
{
	t_dlistnode	*ret;

	if (pos == list->base)
		return (list->base);
	ret = pos->next;
	dlist_unlink(pos);
	dlist_delnode(&pos, del);
	list->size--;
	return (ret);
}
