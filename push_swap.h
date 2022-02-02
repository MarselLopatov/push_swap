/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:47:08 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/02 22:00:20 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

#include <unistd.h>
#include <stdlib.h>

typedef struct stack{
	int				data;
	struct stack 	*next;
}	t_stack;

typedef struct stack_info
{
	int	index;
	int	flag;
}	t_stack_info;

void	ft_pushback(t_stack **lst, t_stack *elem);
t_stack *ft_lstnew(int data);
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);

//Stack commands
void	sa(t_stack **stack);
void	sb(t_stack **stack);
void	ss(t_stack **stack_a, t_stack **stack_b);


#endif