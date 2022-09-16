/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:49:29 by wluedara          #+#    #+#             */
/*   Updated: 2022/08/29 14:14:28 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		len;
	char	*s;
	char	ch;

	ch = c;
	s = (char *)str;
	len = ft_strlen(s) - 1;
	if (ch == '\0')
		return (&s[len + 1]);
	while (len > 0 && s[len] != ch)
			len--;
	if (s[len] == ch)
		return (&s[len--]);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	str[] = "bonjour";
	char	c = 's';

	printf("%s\n", ft_strrchr(str, c));
}*/