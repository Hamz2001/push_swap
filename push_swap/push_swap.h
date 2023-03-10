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
	int index;
	struct stack_b *next;
} s_stack;

int	ft_atoi(const char *str);
//Stack_b
void	ft_stack_a(s_stack **a,int n);
//Stack_a
// void ft_stack_b(s_stack **a,int n);
// //Swap_a
// void	sa(s_stack *nb); //, int display
// //Swap b
// void	sb(s_stack	*nb);
// //Swap two
// void	ss(s_stack *nb);
// //Puch a
// void	pa(s_stack	**a, s_stack **b); //, int display
// //Puch b
// void	pb(s_stack	**a, s_stack **b);
// //rotate a
// void	ra(s_stack **a);
// //rotate b
// void	rb(s_stack **b);
// //rotate rotate
// void	rr(s_stack **a, s_stack **b);
// //reverse rotate a
// void	rra(s_stack **a);
// //reverse rotate b
// void	rrb(s_stack **b);
// //reverse rotate a & b
// void	rrr(s_stack **a, s_stack **b);
//check two number
// void	prob1(s_stack **a);
// int		get_index(s_stack **a);
// void	four_number(s_stack **a, s_stack **b);
//Me============
void	check_tree(s_stack **a);
int		find_min(s_stack **a);
void	check_five(s_stack **a, s_stack **b, int i);
void	check_more(s_stack **a, s_stack **b, int i);

//MyFun================
void	sa(s_stack **a);
void	sb(s_stack **b);
void	ss(s_stack **a, s_stack **b);

void	pa(s_stack **a, s_stack **b);
void	pb(s_stack **a, s_stack **b);

void	ra(s_stack **a);
void	rb(s_stack **b);
void	rr(s_stack **a, s_stack **b);

void	rra(s_stack **a);
void	rrb(s_stack **b);
void	rrr(s_stack **a, s_stack **b);

//Sort======================
void	sort_arr(s_stack **a);
void	ft_sort_int_tab(int *tab, int size);

//List_Outil===================
void lstadd_back(s_stack **lst, s_stack *new);
s_stack	*lstlast(s_stack	*lst);
s_stack	*lstlast_befor(s_stack	*lst);
s_stack	*lstnew(int content);
void	lstadd_front(s_stack **lst, s_stack *new);
int lstsize(s_stack *lst);

//Split
char	**ft_split(char const *s, char c);
// static int	ft_countstr(char const *s, char c);
// static char	*ft_all_str(char const *s, int bg, char c);
// static void	ft_free(char **str, int i);
// static int	ft_separa(char const *str, char c, int in);
size_t	ft_strlen(const char *s);
void    *ft_calloc(size_t count, size_t size);
void    ft_bzero(void *s, size_t n);

#endif
