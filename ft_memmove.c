/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:03:14 by wluedara          #+#    #+#             */
/*   Updated: 2022/09/03 23:23:09 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)str1;
	s2 = (char *)str2;
	if (!s1 && !s2)
		return (NULL);
	while (s1 < s2 && i < n && n >= 0)
	{
			s1[i] = s2[i];
			i++;
	}
	while (s1 > s2 && n > 0)
	{
			s1[n - 1] = s2[n - 1];
			n--;
	}
	return (str1);
}
/*#include <stdio.h>
int main(void)
{
	char str1[50];
	char str2[50] = "mahmudul hasan";
	char *ret;

	ret = ft_memmove(str1, str2, 11);
	printf("%s", ret);
	return (0);
}*/
