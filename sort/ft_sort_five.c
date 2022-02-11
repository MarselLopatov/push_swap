/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:49:19 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/11 18:21:48 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int	index;

	index = 0;
	while (index < 2)
	{
		while ((*stack_a)->index != index)
		{
			if (steps_to_min(*stack_a, index))
				ra(stack_a, 1);
			else
				rra(stack_a, 1);
		}
		pb(stack_a, stack_b, 1);
		index++;
	}
	ft_sort_three(stack_a);
	pa(stack_b, stack_a, 1);
	pa(stack_b, stack_a, 1);
	if (!ft_is_sort(*stack_a))
		sa(stack_a, 1);
}
