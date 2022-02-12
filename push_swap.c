/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:48:49 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/12 16:43:18 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack;

	stack = NULL;
	if (argc < 2)
		ft_exit_error(NULL, NULL, 0);
	parse_args(argv + 1, argc - 1, &stack);
	if (ft_is_sort(stack))
		ft_exit_error(&stack, NULL, 0);
	ft_sort(&stack, argc - 1);
}
