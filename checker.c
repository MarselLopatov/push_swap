/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:54:01 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/15 13:44:41 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parse_commands(char *buf, t_stack **stack_a, t_stack **stack_b)
{
	if (!ft_strcmp(buf, "pa\n"))
		pa(stack_b, stack_a, 0);
	else if (!ft_strcmp(buf, "pb\n"))
		pb(stack_a, stack_b, 0);
	else if (!ft_strcmp(buf, "ra\n"))
		ra(stack_a, 0);
	else if (!ft_strcmp(buf, "rb\n"))
		rb(stack_b, 0);
	else if (!ft_strcmp(buf, "rr\n"))
		rr(stack_a, stack_b, 0);
	else if (!ft_strcmp(buf, "rra\n"))
		rra(stack_a, 0);
	else if (!ft_strcmp(buf, "rrb\n"))
		rrb(stack_b, 0);
	else if (!ft_strcmp(buf, "rrr\n"))
		rrr(stack_a, stack_b, 0);
	else if (!ft_strcmp(buf, "sa\n"))
		sa(stack_a, 0);
	else if (!ft_strcmp(buf, "sb\n"))
		sb(stack_b, 0);
	else if (!ft_strcmp(buf, "ss\n"))
		ss(stack_a, stack_b, 0);
	else
		return (0);
	return (1);
}

void	ft_setzero(int ch, char *str, int n)
{
	int	i;

	i = -1;
	while (++i < n)
		str[i] = ch;
}

int	accept_input(t_stack **stack_a, t_stack **stack_b)
{
	int			i;
	int			ret;
	char		buf[5];

	i = 0;
	ft_setzero(0, buf, 4);
	while (1)
	{
		if (i > 4)
			return (0);
		ret = read(0, buf + i, 1);
		if (buf[i] == '\n' || ret == 0)
		{
			if (!parse_commands(buf, stack_a, stack_b))
				return (1);
			ft_setzero(0, buf, 4);
			i = -1;
		}
		if (ret == 0)
			return (1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	parse_args(argv + 1, argc - 1, &stack_a);
	if (!accept_input(&stack_a, &stack_b))
		ft_exit_error(&stack_a, &stack_b, 1);
	if (!ft_is_sort(stack_a, argc - 2))
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
}
