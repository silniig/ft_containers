#ifndef DLIST_H
# define DLIST_H
# include <libft.h>

typedef struct	s_dlistnode {
	void			*data;
	size_t			size;
	struct s_dlistnode	*prev;
	struct s_dlistnode	*next;
}		t_dlistnode;

typedef struct	s_dlist {
	t_dlistnode	*base;
	size_t		size;
}		t_dlist;

t_dlistnode	*dlist_newnode(const void *data, size_t size);
t_dlist		*dlist_new();
void		dlist_delnode(t_dlistnode **node, void (*del)(void *, size_t));
void		dlist_dellist(t_dlist **list, void (*del)(void *, size_t));
void		link_after(t_dlistnode *node, t_dlistnode *before);
int		dlist_push_back(t_dlist *list, const void *data, size_t size);
int		dlist_push_front(t_dlist *list, const void *data, size_t size);
#endif
