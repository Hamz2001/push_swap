/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 13:44:13 by hrakik            #+#    #+#             */
/*   Updated: 2022/12/25 13:44:14 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void ft_stack_a(s_stack **a,int n)
{
	s_stack *b;
	
	b = lstnew(n);
	lstadd_back(a,b);
}

void ft_stack_b(s_stack **a,int n)
{
	s_stack *b;
	
	b = lstnew(n);
	lstadd_back(a,b);
}

void	sa(s_stack *nb)
{
	int	 tmp;
	
	if (nb && nb->next)
	{
		tmp = nb->value;
		nb->value = nb->next->value;
		nb->next->value = tmp;
	}
	printf("sa\n");
}

void	sb(s_stack	*nb)
{
	int tmp;

	if (nb && nb->next)
	{
		tmp = nb->value;
		nb->value = nb->next->value;
		nb->next->value = tmp;
	}
	printf("sb\n");
}

void	ss(s_stack *nb)
{
	sa(nb);
	sb(nb);
	printf("ss\n");
}