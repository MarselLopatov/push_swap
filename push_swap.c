/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:48:49 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/11 18:40:14 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack;

	stack = NULL;
	if (argc < 2)
		ft_exit_error(NULL, NULL, 1);
	parse_args(argv + 1, argc - 1, &stack);
	if (ft_is_sort(stack))
		ft_exit_error(&stack, NULL, 1);
	// ft_lstprint(stack);
	ft_sort(&stack, argc - 1);
	// ft_lstprint(stack);
}
// ЗАДАЧА. Проверить команды