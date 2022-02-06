/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:48:49 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/05 20:34:41 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sort(t_stack *stack)
{
	t_stack *tmp;

	tmp = stack;
	while (tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	t_stack	*stack;
	
	stack = NULL;
	if (argc < 2)
	{
		printf("~~~Error~~~ not enoght arguments\n");
		exit (0);
	}
	parse_args(argv + 1, argc - 1, &stack);
	ft_lstprint(stack);
	if (ft_is_sort(stack))

}
// ЗАДАЧА. Проверить команды
