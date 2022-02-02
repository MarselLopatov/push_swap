/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:24:33 by cdoria            #+#    #+#             */
/*   Updated: 2022/01/25 17:13:27 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack *ft_lstnew(int data)
{
	t_stack *new;
	
	new = (t_stack *) malloc (sizeof(t_stack));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}
