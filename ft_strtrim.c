/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:13:00 by wluedara          #+#    #+#             */
/*   Updated: 2022/09/08 02:10:47 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc1(size_t count, int x, int len)
{
	char	*call;

	if (len < x)
		call = (void *)malloc(count * (x - len + 1));
	else
		call = (void *)malloc(count * (len - x + 1));
	if (call == 0)
		return (0);
	if (len < x)
		ft_bzero(call, count * (x - len + 1));
	else
		ft_bzero(call, count * (len - x + 1));
	return (call);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		x;
	int		i;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	x = 0;
	len = ft_strlen((char *)s1);
	while (x < len && ft_strchr(set, s1[x]))
		x++;
	while (len - 1 >= 0 && ft_strchr(set, s1[len - 1]))
		len--;
	trim = (char *)ft_calloc1(sizeof(char), x, len);
	if (!trim)
		return (0);
	i = 0;
	while (x < len)
	{
		trim[i++] = s1[x++];
	}
	trim[i] = '\0';
	return (trim);
}
/*
int main()
{
	printf("%s\n", ft_strtrim("abqbc", "abc"));
	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
	return 0;
}
int    main()
{
    char    *s1 = "  \t \t \n   \n\n\n\t";
    char    *s2 = " \n\t";
    //printf("\nThis is 1=> [%s]\n", strtrim(s1, s2));
    printf("%s\n", ft_strtrim(s1, s2));
    return 0;
}*/