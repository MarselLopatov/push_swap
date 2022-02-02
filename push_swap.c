/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:48:49 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/02 21:01:56 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>
int	valid_arg(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] < '9' || arg[i] > '0')
		{
			printf ("\e[1;34m.\e[0m");
			return (0);
		}
	}
}

int	parse_args(char **args, int argc, t_stack **stack)
{
	int	i;
	int *arr;

	i = 0;
	arr = malloc(sizeof(int) * argc);
	while (i < argc)
	{
		if (valid_arg(args[i]))
		{
			arr[i] = ft_atoi(args[i]);
			ft_pushback(stack, ft_lstnew(ft_atoi(args[i])));
		}
		else
		{
			printf("~~~~\nError1\n");
			return (0);
		}
		i++;
	}
	return (1);
}
// надо принять строку argv и внести в стек каждый элемент {name} 0 1 2 3 4 5

int	main(int argc, char *argv[])
{
	t_stack	*stack;
	char	**strs;
	int		i;
	
	i = 0;
	stack = NULL;
	if (argc < 2)
		return (0);
	if (parse_args(argv + 1, argc - 1, &stack))
	{
		
	}
}
