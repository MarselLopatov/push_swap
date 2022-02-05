/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:05:07 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/05 15:08:05 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstprint(t_stack *stack)
{
	t_stack *tmp;
	
	tmp = stack;
	while(tmp)
	{
		printf("data = %d -- index = %d\n", tmp->data, tmp->index);
		tmp = tmp->next;
	}
}
