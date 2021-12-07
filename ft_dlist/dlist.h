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
t_dlist		*dlist_new(void);
void		dlist_delnode(t_dlistnode **node, void (*del)(void *, size_t));
void		dlist_dellist(t_dlist **list, void (*del)(void *, size_t));
void		link_after(t_dlistnode *node, t_dlistnode *before);
void		link_before(t_dlistnode *node, t_dlistnode *after);
int		dlist_push_back(t_dlist *list, const void *data, size_t size);
int		dlist_push_front(t_dlist *list, const void *data, size_t size);
void		dlist_unlink(t_dlistnode *node);
void		dlist_pop_back(t_dlist *list, void (*del)(void *, size_t));
void		dlist_pop_front(t_dlist *list, void (*del)(void *, size_t));
void		*dlist_front(t_dlist *list);
void		*dlist_back(t_dlist *list);
t_dlistnode	*dlist_insert(t_dlist *list, t_dlistnode *pos,
		const void *data, size_t size);
t_dlistnode	*dlist_begin(t_dlist *list);
t_dlistnode	*dlist_end(t_dlist *list);
t_dlistnode	*dlist_erase(t_dlist *list, t_dlistnode *pos,
		void (*del)(void *, size_t));
t_dlistnode	*dlist_erase_range(t_dlist *list, t_dlistnode *first,
		t_dlistnode *last, void (*del)(void *, size_t));
void		dlist_reverse(t_dlist *list);
int		dlist_equal(t_dlist *first, t_dlist *second,
		int (*eq)(void *, void *, size_t));
size_t		dlist_unique(t_dlist *list, int (*eq)(void *, void *, size_t),
		void (*del)(void *, size_t));
void		dlist_sort(t_dlist *list, int (*cmp)(void *, void *, size_t));
int		dlist_empty(t_dlist *list);
void		dlist_clear(t_dlist *list, void (*del)(void *, size_t));
void		dlist_merge(t_dlist *list, t_dlist *other,
		int (*cmp)(void *, void *, size_t));
#endif
