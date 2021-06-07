#include "dlist.h"

static int	equal_nodes(t_dlistnode *first, t_dlistnode *second,
		int (*eq)(void *, void *, size_t))
{
	if (eq && eq(first->data, second->data, first->size))
		return (1);
	if (!eq && !ft_memcmp(first->data, second->data, first->size))
		return (1);
	return (0);
}

size_t		dlist_unique(t_dlist *list, int (*eq)(void *, void *, size_t),
	void (*del)(void *, size_t))
{
	size_t		result;
	t_dlistnode	*begin;
	t_dlistnode	*end;

	result = 0;
	begin = dlist_begin(list);
	end = dlist_end(list);
	while (begin != end)
	{
		if (begin->next == end)
			break;
		if (equal_nodes(begin, begin->next, eq))
		{
			dlist_erase(list, begin->next, del);
			result++;
		}
		else
			begin = begin->next;
	}
	return (result);
}
