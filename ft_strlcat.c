/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:35:53 by wluedara          #+#    #+#             */
/*   Updated: 2022/08/29 16:20:58 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	len_d = ft_strlen(dst);
	len_s = ft_strlen((char *)src);
	if (len_d >= size)
		return (len_s + size);
	if (size > len_d + len_s)
		size = len_d + len_s + 1;
	i = 0;
	while (len_d + i < size - 1)
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = '\0';
	return (len_s + len_d);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char		dest[30];
	char		src[1] = "";

	size_t	size = 0;
	//printf("dest: %s\nsrc: %s\n", dest, src);
	//printf("ori: %lu\n", strlcat(dest, src, size));
	ft_memset(dest, 0, 30);
	puts(dest);
    printf("new: %zu\n", ft_strlcat(dest, src, size));
}*/