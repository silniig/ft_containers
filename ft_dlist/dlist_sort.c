#include "dlist.h"

static void	relink_before(t_dlistnode *target, t_dlistnode *source)
{
	dlist_unlink(source);
	link_before(source, target);
}

static t_dlistnode	*merge(t_dlistnode *left, t_dlistnode *right,
			t_dlistnode *end, int (*cmp)(void *, void *, size_t))
{
	t_dlistnode	*lmover;
	t_dlistnode	*rmover;
	t_dlistnode	*result;

	lmover = left;
	result = left;
	rmover = right;
	while (lmover != rmover && rmover != end)
	{
		if (cmp(rmover->data, lmover->data, rmover->size) < 0)
		{
			rmover = rmover->next;
			if (lmover == left && result == left)
				result = rmover->prev;
			relink_before(lmover, rmover->prev);
		}
		else
			lmover = lmover->next;
	}
	return (result);
}

static t_dlistnode	*inner_sort(t_dlistnode *begin, t_dlistnode *end,
			size_t size, int (*cmp)(void *, void *, size_t))
{
	t_dlistnode	*mid;
	size_t		half;

	if (size < 2)
		return (begin);
	half = size / 2;
	mid = begin;
	while (half--)
		mid = mid->next;
	begin = inner_sort(begin, mid, size / 2, cmp);
	mid = inner_sort(mid, end, size - size / 2, cmp);
	return (merge(begin, mid, end, cmp));
}

void			dlist_sort(t_dlist *list,
			int (*cmp)(void *, void *, size_t))
{
	inner_sort(dlist_begin(list), dlist_end(list), list->size, cmp);
}
