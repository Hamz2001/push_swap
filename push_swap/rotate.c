/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:09:43 by hrakik            #+#    #+#             */
/*   Updated: 2022/12/26 15:09:46 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(s_stack **a)
{
	s_stack *tmp;
	s_stack *tt; 

	if(*a)
	{
		tmp = *a;
		*a = (*a)->next;
		//tmp->next = NULL;
		//lstadd_back(&a,tmp);
		tt = lstlast(*a);
		tt->next = tmp;
		tmp->next = NULL;
	}
}

void	rb(s_stack **b)
{
	ra(b);
}

void	rr(s_stack **a, s_stack **b)
{
	ra(a);
	rb(b);
}