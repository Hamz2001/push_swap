/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:28:27 by hrakik            #+#    #+#             */
/*   Updated: 2023/01/02 14:28:31 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_arr(s_stack **a)
{
	int *tab;
	int i;
	int k;
	int len;
	s_stack *tmp;

	i = 0;
	k = 0;
	tmp = (*a);
	len = lstsize(*a);

	tab = malloc((len) * sizeof(int));
	while(tmp)
	{
		tab[i] = tmp->value;
		tmp = tmp->next;
		i++;
		k++;
	}

	ft_sort_int_tab(tab,i);

	i = 0;
	while(i < len)
	{
		printf("%d\n",tab[i]);
		i++;
	}

	//Mid : hold index of middle element (size / 2 - 1)
	int mid = 0;

	mid = k / 2 - 1;
	printf("here the mid:%d", mid);
}


void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}