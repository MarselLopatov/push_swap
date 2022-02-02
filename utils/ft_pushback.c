/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushback.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:15:18 by cdoria            #+#    #+#             */
/*   Updated: 2022/01/25 17:13:07 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pushback(t_stack **lst, t_stack *elem)
{
	if (!lst || !elem)
		return ;
	while (lst)
		lst = &((*lst)->next);
	*lst = elem;
}
