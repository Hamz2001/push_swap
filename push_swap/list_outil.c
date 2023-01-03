/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_outil.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:38:20 by hrakik            #+#    #+#             */
/*   Updated: 2022/12/25 16:38:21 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lstadd_front(s_stack **lst, s_stack *new)
{
	if (lst != NULL)
	{
		if (*lst != NULL)
			new->next = *lst;
		*lst = new;
	}
}


s_stack	*lstnew(int content)
{
	s_stack *node;

	node = malloc(sizeof(s_stack));
	if (node == NULL)
		return(NULL);
	node->value = content;
	node->next = NULL;
	return(node);
}

s_stack	*lstlast(s_stack	*lst)
{
	s_stack *tmp;

	tmp = lst;
	while (tmp->next != NULL)
	{
		tmp = tmp->next; 
	}
	return(tmp);
}

s_stack	*lstlast_befor(s_stack	*lst)
{
	s_stack *tmp;

	tmp = lst;
	while (tmp->next->next != NULL)
	{
		tmp = tmp->next; 
	}
	return(tmp);
}

void    lstadd_back(s_stack **lst, s_stack *new)
{
    s_stack    *p;

    if (!new)
        return ;
    if (!*lst)
    {
        *lst = new;
        return ;
    }
    p = lstlast(*lst);
    p->next = new;
}

int lstsize(s_stack *a)
{
	int	i;
	s_stack	*tmp;

	tmp = a;
	i = 0;
	while(tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return(i);
}
