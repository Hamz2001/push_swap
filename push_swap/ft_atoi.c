/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:36:25 by hrakik            #+#    #+#             */
/*   Updated: 2022/10/29 21:23:33 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	size_t	res;
	int len_nb;

	i = 0;
	sign = 1;
	res = 0;
	len_nb = ft_strlen(str);

	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		if ((res > INT_MAX && sign == 1) || (res > INT_MAX && sign == -1))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
	if(len_nb == i)
		return (sign * res);
	else
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	return(0);
}