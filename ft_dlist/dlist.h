#ifndef DLIST_H
# define DLIST_H
# include <libft.h>

typedef struct	s_dlistnode {
	void			*data;
	size_t			size;
	struct s_dlistnode	*left;
	struct s_dlistnode	*right;
}		t_dlistnode;

typedef struct	s_dlist {
	t_dlistnode	*base;
	size_t		size;
}
#endif
