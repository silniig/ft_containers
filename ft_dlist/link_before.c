#include "dlist.h"

void	link_before(t_dlistnode *node, t_dlistnode *after)
{
	after->prev->next = node;
	node->prev = after->prev;
	node->next = after;
	after->prev = node;
}
