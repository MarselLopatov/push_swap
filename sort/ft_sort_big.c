/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:45:17 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/12 03:23:15 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_b(t_stack **stack_a, t_stack **stack_b, int max_index)
{
	while ((*stack_b))
	{
		if ((*stack_b)->index == max_index)
		{
			pa(stack_b, stack_a, 1);
			max_index--;
		}
		else if (steps_to_index(*stack_b, max_index))
			rb(stack_b, 1);
		else
			rrb(stack_b, 1);
	}
}

void	ft_sort_big(t_stack **stack_a, t_stack **stack_b,
			int interval, int argc)
{
	int	index;

	index = 0;
	while (*stack_a)
	{
		if (index > 1 && (*stack_a)->index <= index)
		{
			pb(stack_a, stack_b, 1);
			rb(stack_b, 1);
			index++;
		}
		else if ((*stack_a)->index <= (index + interval))
		{
			pb(stack_a, stack_b, 1);
			index++;
		}
		else if ((*stack_a)->index >= index)
			ra(stack_a, 1);
	}
	ft_sort_b(stack_a, stack_b, argc - 1);
}
