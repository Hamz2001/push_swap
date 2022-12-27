/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:56:46 by hrakik            #+#    #+#             */
/*   Updated: 2022/12/22 13:56:48 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP
#define PUSH_SWAP

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

//Struct
typedef struct stack_b {
	int value;
	struct stack_b *next;
} s_stack;

int	ft_atoi(const char *str);
//Stack_b
void	ft_stack_a(s_stack **a,int n);
//Stack_a
void ft_stack_b(s_stack **a,int n);
//Swap_a
void	sa(s_stack *nb);
//Swap b
void	sb(s_stack	*nb);
//Swap two
void	ss(s_stack *nb);
//Puch a
void	pa(s_stack	**a, s_stack **b);
//Puch b
void	pb(s_stack	**a, s_stack **b);
//rotate a
void	ra(s_stack **a);
//rotate b
void	rb(s_stack **b);
//rotate rotate
void	rr(s_stack **a, s_stack **b);
//reverse rotate a
void	rra(s_stack **a);
//reverse rotate b
void	rrb(s_stack **b);
//reverse rotate a & b
void	rrr(s_stack **a, s_stack **b);
//check two number
void	ft_check_1(s_stack **a);
void	ft_check_2(s_stack **a);
void	ft_check_3(s_stack **a);

void lstadd_back(s_stack **lst, s_stack *new);
s_stack	*lstlast(s_stack	*lst);
s_stack	*lstlast_befor(s_stack	*lst);
s_stack	*lstnew(int content);
void	lstadd_front(s_stack **lst, s_stack *new);

#endif
