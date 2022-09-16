/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:05:25 by wluedara          #+#    #+#             */
/*   Updated: 2022/08/29 14:12:26 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	new = (char *)dest;
	while (i < len)
	{
		new[i] = (char)c;
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[50];
	strcpy(str, "This is string.h library function");
	puts(str);
	ft_memset(str, 0, 5);
	puts(str);
	return (0);
}*/
