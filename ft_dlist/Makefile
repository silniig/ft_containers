NAME = libdlist.a
HDRS = dlist.h
LIBFTPATH = ../../pure_libft
SRCS = dlist_new.c dlist_newnode.c dlist_delnode.c dlist_dellist.c \
       link_after.c dlist_push_back.c dlist_push_front.c dlist_unlink.c \
       dlist_pop_front.c dlist_pop_back.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra
IFLAGS = -I$(LIBFTPATH)
LFLAGS = -L$(LIBFTPATH) -lft

all: $(NAME)

$(NAME): $(OBJS)
	ar -urc $(NAME) $(OBJS)

%.o: %.c $(HDRS)
	gcc -c $(IFLAGS) $(CFLAGS) $< -o $@ $(LFLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
