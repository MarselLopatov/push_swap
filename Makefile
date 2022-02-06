NAME	= push_swap

UTILS_PATH = ./utils/
UTILS = ft_atoi.c \
		ft_lstlast.c \
		ft_lstnew.c \
		ft_lstprint.c \
		ft_pushback.c \
		parse_args.c \

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

SRCS = push_swap.c $(addprefix $(UTILS_PATH), $(UTILS)) $(addprefix $(COMM_PATH), $(COMM))
HEADER = push_swap.h

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
