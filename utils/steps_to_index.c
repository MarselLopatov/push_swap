/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps_to_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:14:00 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/12 16:16:43 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	steps_to_index(t_stack *stack_a, int index, int flag)
{
	int	steps;

	steps = 0;
	while (stack_a)
	{
		if (stack_a->index == index)
			break ;
		steps++;
		stack_a = stack_a->next;
	}
	if (flag)
		return (steps);
	else if (steps > ft_lstlast(stack_a)->index / 2)
		return (0);
	else
		return (1);
}
