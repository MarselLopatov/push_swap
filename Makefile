NAME	= push_swap
BONUS_NAME = checker

HEADER = push_swap.h

SORT_PATH = ./sort/
SORT =	ft_sort.c \
		ft_sort_three.c \
		ft_sort_four.c \
		ft_sort_five.c \
		ft_sort_big.c \

GNL_PATH = ./get_next_line/
GNL = 	get_next_line.c \
		get_next_line_utils.c \


UTILS_PATH = ./utils/
UTILS = ft_atoi.c \
		ft_lstlast.c \
		ft_lstnew.c \
		ft_pushback.c \
		parse_args.c \
		ft_lstclear.c \
		ft_exit_error.c \
		ft_is_sort.c \
		steps_to_index.c \
		ft_strcmp.c \

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
		ss.c \

SRCS = push_swap.c $(addprefix $(UTILS_PATH), $(UTILS)) $(addprefix $(COMM_PATH), $(COMM)) $(addprefix $(SORT_PATH), $(SORT))
SRCS_BONUS = checker.c $(addprefix $(UTILS_PATH), $(UTILS)) $(addprefix $(COMM_PATH), $(COMM)) $(addprefix $(SORT_PATH), $(SORT)) $(addprefix $(GNL_PATH), $(GNL))

OBJ = $(patsubst %.c, %.o, $(SRCS))
OBJ_BONUS = $(patsubst %.c, %.o, $(SRCS_BONUS))

CC = gcc
FLAGS = -o2 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -I $(HEADER) -o $@

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

bonus: $(BONUS_NAME)

$(BONUS_NAME): $(OBJ_BONUS)
	$(CC) $(OBJ_BONUS) -I $(HEADER) -o $@

clean:  
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -rf $(NAME) $(BONUS_NAME)

re: fclean all

.PHONY: all clean fclean re bonus