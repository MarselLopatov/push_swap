/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:39:03 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/11 18:32:56 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_three(t_stack **stack_a)
{
	if ((*stack_a)->index > (*stack_a)->next->index
		&& (*stack_a)->index > (*stack_a)->next->next->index)
	{
		ra(stack_a, 1);
		if ((*stack_a)->index > (*stack_a)->next->index)
			sa(stack_a, 1);
		return ;
	}
	else if ((*stack_a)->next->index > (*stack_a)->index
		&& (*stack_a)->next->index > (*stack_a)->next->next->index)
	{
		rra(stack_a, 1);
		if ((*stack_a)->index > (*stack_a)->next->index)
			sa(stack_a, 1);
		return ;
	}
	else if ((*stack_a)->index > (*stack_a)->next->index)
	{
		sa(stack_a, 1);
		return ;
	}
}
