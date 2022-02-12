/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:41:41 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/12 03:26:39 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	res;

	sign = 1;
	res = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	i = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res * sign > 2147483647 || res * sign < -2147483648)
			ft_exit_error(NULL, NULL, 1);
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
