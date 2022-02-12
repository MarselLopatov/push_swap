/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:44:05 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/11 14:36:43 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort(t_stack **stack_a, int argc)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (argc == 2)
		sa(stack_a, 1);
	else if (argc == 3)
		ft_sort_three(stack_a);
	else if (argc == 4)
		ft_sort_four(stack_a, &stack_b, argc);
	else if (argc == 5)
		ft_sort_five(stack_a, &stack_b, argc);
	else if (argc >= 6 && argc <= 101)
		ft_sort_big(stack_a, &stack_b, 15, argc);
	else if (argc > 101)
		ft_sort_big(stack_a, &stack_b, 30, argc);
	ft_exit_error(stack_a, &stack_b, 0);
}
