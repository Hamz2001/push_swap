/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:06:25 by hrakik            #+#    #+#             */
/*   Updated: 2022/12/21 16:06:26 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void ft_check_is_nb(char *av)
// {
// 	int res;

// 	res = 0;
// 	//printf("%s", av[1]);
// 	if (av != NULL)
// 	{
// 		res = ft_atoi(av);
// 		//printf("%d\n", res);
// 	}
// }

int main(int ac, char **av)
{
	int i;
	int p;
	char **nb;
	s_stack *a = NULL;
	//s_stack *b = NULL;
	
	i = 1;
	if (ac > 1)
	{
		while(av[i])
		{
			p = 0;
			nb = ft_split(av[i], ' ');
			while(nb[p])
			{
				ft_stack_a(&a,ft_atoi(nb[p]));
				p++;
			}
			i++;
		}
		//pb(&a, &b);
		//ra(&a);
		//check_five(&a, &b, 80);
		//check_five(&a,&b, 5);
		sort_arr(&a);
		//pa(&a, &b);
		// while(a)
		// {
		// 	printf("\nStack a: %d\n",a->value);
		// 	a = a->next;
		// }
		// printf("=================");
		// while(b)
		// {
		// 	printf("\nStack b: %d\n",b->value);
		// 	b = b->next;
		// }
	}
	else
	{
		write(2, "Error", 5);
	}
	//system("leaks push_swap");
}