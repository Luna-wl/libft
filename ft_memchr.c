/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:22:15 by wluedara          #+#    #+#             */
/*   Updated: 2022/08/29 14:11:23 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s1;
	char	ch;

	s1 = (char *)s;
	ch = (char)c;
	i = 0;
	while (i < n)
	{
		if (s1[i] == ch)
			return (s1 + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
    const void  *s = "ABFDEF";
    int c = 70;
    size_t  n = 6;
    char    *sn;

    sn = ft_memchr(s, c, n);
    printf("Result: %s/n", sn);
    return (0);
}*/
