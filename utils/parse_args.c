/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:40:44 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/05 02:06:16 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_double(int *arr, int i, int value)
{
	while (i >= 0)
	{
		if (arr[i] == value)
		{
			printf ("~~~~Error~~~~ '%d' duplicate value\n", arr[i]);
			exit (0);	
		}
		i--;
	}
}

void	valid_arg(char *arg)
{
	int	i;

	i = 0;	
	if (arg[i] == '-' && arg[i + 1] == '0')
	{
		printf ("~~~~Error~~~~ '%c' non valid\n", arg[i]);
		exit (0);
	}
	if (arg[i] == '-' || arg[i] == '+')
		i++;
	while(arg[i])
	{
		if (arg[i] < '0' || arg[i] > '9' || arg[i] == '-' || arg[i] == '+')
		{
			printf ("~~~~Error~~~~ '%c' non valid\n", arg[i]);
			exit (0);
		}
		i++;
	}
}

void	sort_arr(int *arr, int argc)
{
	int	elem;
	int	pos;
	int	i;

	i = 1;
	elem = 0;
	while (i < argc)
	{
		elem = arr[i];
		pos = i - 1;
		while (pos >= 0 && arr[pos] > elem)
		{
			arr[pos + 1] = arr[pos];
			pos = pos - 1;
		}
		arr[pos + 1] = elem;
		i++;
	}
}

void	parse_args(char **args, int argc, t_stack **stack)
{
	int	i;
	int arr[argc];

	i = 0;
	while (i < argc)
	{
		valid_arg(args[i]);
		arr[i] = ft_atoi(args[i]);
		check_double(arr, i - 1, arr[i]);
		i++;
	}
	sort_arr(arr, argc);
}
// Пустая строка
// ЗАДАЧА. отсортировать массив и записать все в стак


// ft_pushback(stack, ft_lstnew(ft_atoi(args[i])));
