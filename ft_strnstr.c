/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:20:10 by wluedara          #+#    #+#             */
/*   Updated: 2022/08/29 14:35:44 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;
	char	*b;
	char	*l;

	b = (char *)big;
	l = (char *)little;
	if (*l == '\0')
		return (b);
	i = 0;
	while (b[i] != '\0' && i < len && len > 0)
	{
		x = 0;
		while (b[i + x] == l[x] && l[x] != '\0' && i + x < len)
		{
			if (l[x + 1] == '\0')
				return (&b[i]);
			x++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char haystack[30] = "aaabcabcd";
    char needle[10] = "aabc";
	printf("2 = %s\n", strnstr(haystack, needle, -1));
    printf("2 : %s\n", ft_strnstr(haystack, needle, -1));

	printf("8 = %s\n", strnstr(haystack, "aaabc", 5));
	printf("8 : %s\n", ft_strnstr(haystack, "aaabc", 5));

	printf("10 = %s\n", strnstr(haystack, "abcd", 9));
	printf("10 : %s\n", ft_strnstr(haystack, "abcd", 9));
}*/