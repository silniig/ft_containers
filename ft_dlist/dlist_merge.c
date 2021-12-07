#include "dlist.h"

void	dlist_merge(t_dlist *lhs, t_dlist *rhs,
		int (*cmp)(void *, void *, size_t))
{
	t_dlistnode	*lm;
	t_dlistnode	*rm;
	t_dlistnode	*next;

	lm = dlist_begin(lhs);
	rm = dlist_begin(rhs);
	while (rm != rhs->base)
	{
		next = rm->next;
		dlist_unlink(rm);
		rhs->size--;
		while (lm != lhs->base &&
			cmp(rm->data, lm->data, rm->size) >= 0)
			lm = lm->next;	
		link_before(rm, lm);
		rm = next;
	}
}
