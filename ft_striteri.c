/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 23:29:59 by wluedara          #+#    #+#             */
/*   Updated: 2022/09/03 23:30:08 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen((char *)s);
	while (i < len)
	{
		(*f)(i, &s[i]);
		i++;
	}
}
