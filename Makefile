NAME	= push_swap

HEADER = push_swap.h

SORT_PATH = ./sort/
SORT =	ft_sort.c \
		ft_sort_three.c \
		ft_sort_five.c \

UTILS_PATH = ./utils/
UTILS = ft_atoi.c \
		ft_lstlast.c \
		ft_lstnew.c \
		ft_lstprint.c \
		ft_pushback.c \
		parse_args.c \
		ft_lstclear.c \
		ft_exit_error.c \
		ft_putstr.c \

COMM_PATH = ./commands/
COMM =	pa.c \
		pb.c \
		ra.c \
		rb.c \
		rr.c \
		rra.c \
		rrb.c \
		rrr.c \
		sa.c \
		sb.c \
		ss.c

SRCS = push_swap.c $(addprefix $(UTILS_PATH), $(UTILS)) $(addprefix $(COMM_PATH), $(COMM)) $(addprefix $(SORT_PATH), $(SORT))

OBJ = $(patsubst %.c, %.o, $(SRCS))

CC = gcc
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	${CC} $(OBJ) -I $(HEADER) -o $@

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:  
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re