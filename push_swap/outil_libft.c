/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:21:48 by hrakik            #+#    #+#             */
/*   Updated: 2022/10/15 12:40:15 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' )
	{
		i++;
	}
	return (i);
}

void    *ft_calloc(size_t count, size_t size)
{
    void    *p;

    if (size != 0 && count >= SIZE_MAX / size)
    {
        return (NULL);
    }
    p = malloc(count * size);
    if (p == 0)
        return (0);
    ft_bzero (p, (count * size));
    return (p);
}

void    ft_bzero(void *s, size_t n)
{
    size_t            i;
    char            *sr;

    sr = (char *)s;
    i = 0;
    while (i < n)
    {
        sr[i] = '\0';
        i++;
    }
}
