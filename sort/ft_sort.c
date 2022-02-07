/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:44:05 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/07 19:48:55 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort(t_stack **stack_a, int argc)
{
	// t_stack	*stack_b;

	if (argc == 2)
		sa(stack_a, 1);
	if (argc == 3)
		ft_sort_three();
	if (argc == 5)
		ft_sort_fice();
}
