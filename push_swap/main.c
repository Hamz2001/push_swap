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

void ft_check_is_nb(char *av)
{
	int res;

	res = 0;
	//printf("%s", av[1]);
	if (av != NULL)
	{
		res = ft_atoi(av);
		//printf("%d\n", res);
	}
}

int main(int ac, char **av)
{
	int i;
	int o;
	int p;
	char **nb;
	//int l;
	s_stack *a = NULL;
	s_stack *b = NULL;
	
	i = 1;
	o = 0;
	//l = 2;
	if (ac > 1)
	{
		// av = ft_split(av[1], ' ');
		// while (av[o])
		// {
		// 	printf("%s\n",av[o]);
		// 	o++;
		// }
		while(av[i] )
		{
			p = 0;
			nb = ft_split(av[i], ' ');
			while(nb[p])
			{
				ft_stack_a(&a,ft_atoi(nb[p]));
				p++;
			}
			p = 0;
			while(nb[p])
			{
				ft_stack_b(&b, ft_atoi(nb[p]));
				//printf("\nhere nb \n: %s", nb[p]);
				p++;
			}
			i++;
		}
		// while(av[l])
		// {
		// 	p = 0;
		// 	nb = ft_split(av[l], ' ');
		// 	while(nb[p])
		// 	{
		// 		ft_stack_b(&b, ft_atoi(nb[p]));
		// 		//printf("\nhere nb \n: %s", nb[p]);
		// 		p++;
		// 	}
		// 	l++;
		// }
		//pa(&a,&b);
		//pb(&a,&b);
		//rr(&a,&b);

		
		while(a)
		{
			printf("\nStack a: %d\n",a->value);
			a = a->next;
		}
		printf("=================");
		while(b)
		{
			printf("\nStack b: %d\n",b->value);
			b = b->next;
		}
	}
	//system("leaks push_swap");
}
