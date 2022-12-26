/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:11:57 by hrakik            #+#    #+#             */
/*   Updated: 2022/12/25 18:11:58 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(s_stack	**a, s_stack **b)
{
	s_stack	*tmp;

	if (*b == NULL)
		return ;
	else if(*b != NULL)
	{
		//tmp = *a;
		//lstadd_front(a, b);
		tmp = (*b)->next;
		(*b)->next = *a;
		*a = *b;
		*b = tmp;
	}
}

void	pb(s_stack	**a, s_stack **b)
{
	pa(b,a);
}
