/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:32:21 by hrakik            #+#    #+#             */
/*   Updated: 2022/12/31 13:32:22 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//=================================Stack=================================

void	ft_stack_a(s_stack **a, int nb)
{
	s_stack *p;

	p = lstnew(nb);
	lstadd_back(a, p);
}

//=================================Swap=================================
void	sa(s_stack **a)
{
	s_stack	*tmp;
	s_stack *tmp1;

	// if(*a == NULL)
	// 	return ;
	if ((*a) && (*a)->next)
	{
		tmp = (*a);
		tmp1 = (*a)->next->next;
		(*a) = (*a)->next;
		(*a)->next = tmp;
		tmp->next = tmp1;

	}
	write(1, "sa\n", 3);
}

void	sb(s_stack **b)
{
	s_stack *tmp;
	s_stack *tmp1;

	if ((*b) && (*b)->next)
	{
		tmp = (*b);
		tmp1 = (*b)->next->next;
		(*b) = (*b)->next;
		(*b)->next = tmp;
		tmp->next = tmp1;
	}
	write(1, "sb\n", 3);
}

void	ss(s_stack **a, s_stack **b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}

//=================================Push=================================

void	pa(s_stack **a, s_stack **b)
{
	s_stack *tmp;

	if (*b)
	{
		tmp = (*b);
		(*b) =(*b)->next;
		tmp->next = (*a);
		(*a) = tmp;
	}
	write(1, "pa\n", 3);
}

void	pb(s_stack **a, s_stack **b)
{
	s_stack *tmp;

	if(*a)
	{
		tmp = (*a);
		(*a) =(*a)->next;
		tmp->next = (*b);
		(*b) = tmp;
	}
	write(1, "pb\n", 3);
}

//=================================Rotate=================================

void	ra(s_stack **a)
{
	s_stack *tmp;
	s_stack *tmp1;

	tmp = (*a);
	tmp1 = (*a);
	(*a) = (*a)->next;
	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = tmp1;
	tmp1->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(s_stack **b)
{
	s_stack *tmp;
	s_stack *tmp1;

	tmp = (*b);
	tmp1 = (*b);
	(*b) = (*b)->next;
	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = tmp1;
	tmp1->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(s_stack **a, s_stack **b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}

//=================================Rotate-Reverse=================================

void	rra(s_stack **a)
{
	s_stack *tmp;
	s_stack *tmp1;

	tmp = (*a);
	tmp1 = (*a);
	while (tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp1 = tmp->next;
	tmp1->next = (*a);
	tmp->next = NULL;
	(*a) = tmp1;
	write(1, "rra\n", 4);
}

void	rrb(s_stack **b)
{
	s_stack *tmp;
	s_stack *tmp1;

	tmp = (*b);
	while (tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp1 = tmp->next;
	tmp1->next = (*b);
	tmp->next = NULL;
	(*b) = tmp1;
	write(1, "rrb\n", 4);
}

void	rrr(s_stack **a, s_stack **b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
