/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 09:56:40 by hrakik            #+#    #+#             */
/*   Updated: 2022/12/28 09:56:42 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_tree(s_stack **a)
{
	int e;
	int f;
	int j;

	e = (*a)->value;
	f = (*a)->next->value;
	j = (*a)->next->next->value;
	
	if (e < f && e < j && f > j)
	{
		sa(a);
		ra(a);
	}
	else if (e > f && f < j && j > e)
	{
		sa(a);
	}
	else if (e < f && e > j && f > j)
	{
		rra(a);
	}
	else if (e > f && e > j && f > j)
	{
		sa(a);
		rra(a);
	}
	else if (e > f && f < j && e > j)
	{
		ra(a);
	}
}

int find_min(s_stack **a)
{
	s_stack *tmp;
	int min;

	tmp = *a;
	min = (*a)->value;
	while (tmp)
	{
		if (min > tmp->value)
			min = tmp->value;
		tmp = tmp->next; 
	}
	return(min);
}

void	check_five(s_stack **a, s_stack **b, int i)
{
	while(*a && i > 3)
	{
		s_stack *tmp = NULL;
		int min;

		tmp = lstlast(*a);
		min = find_min(a);
		if (min == tmp->value)
			rra(a);
		if(min != (*a)->value)
			ra(a);
		else
		{
			pb(a,b);
			i--;
		}
	}
	check_tree(a);
	while(*b)
		pa(a,b);
	//pa(a,b);
}