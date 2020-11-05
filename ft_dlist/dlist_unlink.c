#include "dlist.h"

void	dlist_unlink(t_dlistnode *node)
{
	node->prev->next = node->next;
	node->next->prev = node->prev;
}
