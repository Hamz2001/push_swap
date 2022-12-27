/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 17:06:18 by hrakik            #+#    #+#             */
/*   Updated: 2022/12/26 17:06:20 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(s_stack **a)
{
	s_stack	*tmp;
	s_stack	*tt;

	if(*a)
	{
		tt = lstlast(*a);
		tmp = lstlast_befor(*a);
		tt->next = *a;
		tmp->next = NULL;
		*a = tt;
	}
}

void	rrb(s_stack **b)
{
	rra(b);
}

void	rrr(s_stack **a, s_stack **b)
{
	rra(a);
	rrb(b);
}
