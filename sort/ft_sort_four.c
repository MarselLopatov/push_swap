/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:34:01 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/11 18:20:41 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_four(t_stack **stack_a, t_stack **stack_b)
{
	while ((*stack_a)->index != 0)
	{
		if (steps_to_min(*stack_a, 0))
			ra(stack_a, 1);
		else
			rra(stack_a, 1);
	}
	if (ft_is_sort(*stack_a))
		return ;
	pb(stack_a, stack_b, 1);
	ft_sort_three(stack_a);
	pa(stack_b, stack_a, 1);
}
