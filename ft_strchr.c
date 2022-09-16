/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:20:53 by wluedara          #+#    #+#             */
/*   Updated: 2022/08/29 14:13:24 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*s;
	char	ch;

	i = 0;
	ch = c;
	s = (char *)str;
	while (s[i] != '\0' && s[i] != ch)
		i++;
	if (s[i] == ch)
		return (&s[i++]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void) 
{
	//printf ( "1. %s\n", ft_strchr( "xavocadoyz" , 'z'));
	//printf ( "2. %s\n", ft_strchr( "Can a digit be found?" , '2' ));
	//printf ( "3. %s\n", ft_strchr( "http://www.tutorialspoint.com" , '.'));
	//printf("%s\n", ft_strchr("abqbc", 'b'));
	//printf("%s\n", ft_strchr("xavocadoyz", 'y'));
	char	str3[] = "";
	printf("%s\n", ft_strchr(str3, '\0'));
	printf("ori: %s\n", strchr(str3, '\0'));
	return(0);
}*/
