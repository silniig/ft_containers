#include "dlist.h"

void	link_after(t_dlistnode *node, t_dlistnode *before)
{
	before->next->prev = node;
	node->next = before->next;
	node->prev = before;
	before->next = node;
}
