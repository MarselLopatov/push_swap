/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:47:08 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/06 20:01:02 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

#include <unistd.h>
#include <stdlib.h>

// УДАЛИТЬ ЭТО К ХУЯМ НАХУЙ СОБАЧИМ ДУРАК ЕБУЧИЙ БЛЯТЬ
// УДАЛИТЬ ЭТО К ХУЯМ НАХУЙ СОБАЧИМ ДУРАК ЕБУЧИЙ БЛЯТЬ
// УДАЛИТЬ ЭТО К ХУЯМ НАХУЙ СОБАЧИМ ДУРАК ЕБУЧИЙ БЛЯТЬ
#include <stdio.h> // НАХУЙ СОБАЧИМ ДУРАК ЕБУЧИЙ БЛЯТЬ
// УДАЛИТЬ ЭТО К ХУЯМ НАХУЙ СОБАЧИМ ДУРАК ЕБУЧИЙ БЛЯТЬ
// УДАЛИТЬ ЭТО К ХУЯМ НАХУЙ СОБАЧИМ ДУРАК ЕБУЧИЙ БЛЯТЬ
// УДАЛИТЬ ЭТО К ХУЯМ НАХУЙ СОБАЧИМ ДУРАК ЕБУЧИЙ БЛЯТЬ


typedef struct stack{
	int				data;
	int				index;
	struct stack 	*next;
}	t_stack;

// typedef struct stack_info
// {
// 	int	index;
// 	int	flag;
// }	t_stack_info;

void	parse_args(char **args, int argc, t_stack **stack);
void	ft_pushback(t_stack **lst, t_stack *elem);
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c); // мб удалить
void	ft_exit_error(t_stack **stack_a, t_stack **stack_b, int flag);
void	ft_putstr(char *str);

//lst
t_stack *ft_lstnew(int data, int index);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstclear(t_stack **stack);
void	ft_lstprint(t_stack *stack);

//Stack commands
void	sa(t_stack **stack, int flag);
void	sb(t_stack **stack, int flag);
void	ss(t_stack **stack_a, t_stack **stack_b, int flag);
void	pa(t_stack **from, t_stack **to, int flag);
void	pb(t_stack **from, t_stack **to, int flag);
void	ra(t_stack **stack, int flag);
void	rb(t_stack **stack, int flag);
void	rr(t_stack **stack_a, t_stack **stack_b, int flag);
void	rra(t_stack **stack, int flag);
void	rrb(t_stack **stack, int flag);
void	rrr(t_stack **stack_a, t_stack **stack_b, int flag);

#endif