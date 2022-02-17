/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:41:23 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/17 20:28:48 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_sort(t_stack *stack, int argc)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = stack;
	while (tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
		i++;
	}
	if (i != argc)
		return (0);
	return (1);
}
