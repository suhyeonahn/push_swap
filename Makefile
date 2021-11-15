NAME = push_swap

SRC = ft_atoi.c \
	init.c \
	is.c \
	list.c \
	list_operations.c \
	pivot.c \
	push_swap.c \
	sort_a.c \
	sort_b.c \
	sort_five_a.c \
	sort_five_b.c \
	sort_three_a.c \
	sort_three_b.c 	\
	stack_operations.c \
	stack_reverse_rotations.c \
	stack_rotations.c

DIR_S = srcs

SRCS = $(addprefix ${DIR_S}/, ${SRC})

OBJS = $(SRCS:.c=.o)

CFLAGS = -I./ -Wall -Wextra -Werror

all	: $(NAME)

$(NAME) : $(OBJS)
			gcc -o $(NAME) $(SRCS) $(CFLAGS)

clean	:
			rm -rf $(OBJS) 

fclean	: clean
			rm -rf $(NAME)

re : fclean all

.PHONY: re clean fclean all
