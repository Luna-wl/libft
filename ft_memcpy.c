/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:48:39 by wluedara          #+#    #+#             */
/*   Updated: 2022/08/31 17:27:05 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*new1;
	char	*new2;

	i = 0;
	new1 = (char *)dest;
	new2 = (char *)src;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		*new1 = *new2;
		i++;
		new1++;
		new2++;
	}
	return (dest);
}
/*#include <stdio.h>
int main(void)
{
	char src[50] = "mahmudulhasanjony";
	char dest[50];
	char *ret;

	ret = ft_memcpy(dest, src, 9);
	printf("%s", ret);
	return (0);
}*/
