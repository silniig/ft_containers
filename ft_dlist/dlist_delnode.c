#include "dlist.h"

void	dlist_delnode(t_dlistnode **node, void (*del)(void *, size_t))
{
	if (del)
		del((*node)->data, (*node)->size);
	free(*node);
	*node = NULL;
}
