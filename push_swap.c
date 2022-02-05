/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:48:49 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/05 15:08:38 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack;
	char	**strs;
	int		i;
	
	i = 0;
	stack = NULL;
	if (argc < 2)
	{
		printf("~~~Error~~~ not enoght arguments\n");
		exit (0);
	}
	parse_args(argv + 1, argc - 1, &stack);
	ft_lstprint(stack);
}
// ЗАДАЧА. Проверить команды
