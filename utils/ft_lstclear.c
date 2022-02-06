/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:30:59 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/06 18:54:38 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstclear(t_stack **stack)
{
	if (!stack || !*stack)
		return ;
	ft_lstclear(&(*stack)->next);
	free (*stack);
	*stack = NULL;
}
