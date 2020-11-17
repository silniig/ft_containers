#include "dlist.h"

t_dlistnode	*dlist_erase_range(t_dlist *list, t_dlistnode *first,
		t_dlistnode *last, void (*del)(void *, size_t))
{
	t_dlistnode	*next;

	if (first == last)
		return (last);
	while (first != last)
	{
		next = first->next;
		dlist_unlink(first);
		dlist_delnode(&first, del);
		first = next;
		list->size--;
	}
	return (last);
}
