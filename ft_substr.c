/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:24:51 by wluedara          #+#    #+#             */
/*   Updated: 2022/09/03 23:35:39 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	size_t	i;
	size_t	j;
	char	*sub;

	if (!s)
		return (0);
	j = ft_strlen((char *)s);
	if (len > j)
		sub = (char *)malloc(sizeof(char) * (j + 1));
	else
		sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	i = 0;
	while (i < len && start < j)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int main()
{
	char* str;

	str = ft_substr("tripouille", 2, 5);
	printf("%s\n", str);

	return 0;
}*/
