#include "dlist.h"

int	dlist_equal(t_dlist *lhs, t_dlist *rhs,
		int (*eq)(void *, void *, size_t))
{
	t_dlistnode	*bl;
	t_dlistnode	*el;
	t_dlistnode	*br;

	if (lhs->size != rhs->size)
		return (0);
	bl = dlist_begin(lhs);
	el = dlist_end(lhs);
	br = dlist_begin(rhs);
	while (bl != el)
	{
		if (eq && !eq(bl->data, br->data, bl->size))
			return (0);
		else if (!eq && ft_memcmp(bl->data, br->data, bl->size))
			return (0);
		bl = bl->next;
		br = br->next;
	}
	return (1);
}
