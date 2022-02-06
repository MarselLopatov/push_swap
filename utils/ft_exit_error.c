/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:20:02 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/06 19:59:30 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_exit_error(t_stack **stack_a, t_stack **stack_b, int flag)
{
	if (stack_a)
		ft_lstclear(stack_a);
	if (stack_b)
		ft_lstclear(stack_b);
	if (flag)
		ft_putstr("Error\n");
	exit (0);
}
