/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushback.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:15:18 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/12 03:29:25 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pushback(t_stack **lst, t_stack *elem)
{
	t_stack	*tmp;

	if (!lst || !elem)
		return ;
	if (!*lst)
	{
		*lst = elem;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = elem;
}
