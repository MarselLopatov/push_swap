/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 22:02:59 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/06 19:21:21 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack **from, t_stack **to, int flag)
{
	t_stack *tmp;

	if (!*from)
		return ;
	tmp = *from;
	*from = tmp->next;
	(*from)->next = NULL;
	(*to)->next = (*from);
	*to = tmp;
	if (flag)
		write(1, "pa\n", 3);
}
