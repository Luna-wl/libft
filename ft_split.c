/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:27:33 by wluedara          #+#    #+#             */
/*   Updated: 2022/08/31 16:48:08 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	check_word(char const *s, char c)
{
	int	i;
	int	count;
	int	len;

	i = 0;
	count = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		if (s[i] != c && s[i])
		{
			while (s[i] != c)
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

int	count_letter(char const *s, char c)
{
	char	*s1;
	int		i;

	s1 = (char *)s;
	i = 0;
	while (s1[i] != '\0' && s1[i] != c)
	{
		if (s1[i] != c)
			i++;
		if (s1[i] == c)
			return (i);
	}
	return (0);
}

char	*split(char const *s, char c)
{
	char	*str;
	int		letter;
	int		i;
	int		j;

	letter = count_letter(s, c);
	str = (char *)malloc(sizeof(char) * (letter + 1));
	i = 0;
	j = 0;
	while (s[j] != 0 && s[j] != c)
		str[i++] = s[j++];
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		word;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	word = check_word(s, c);
	new = (char **)malloc(sizeof(char *) * (word + 1));
	if (!new)
		return (0);
	j = 0;
	while (i < word)
	{
		while (s[j] == c && s[j] != '\0')
			j++;
		new[i++] = split(&s[j], c);
		j += count_letter(&s[j], c);
	}
	new[i] = 0;
	return (new);
}

// #include <malloc/malloc.h>
int main()
{
	int i = 0;
	char **tab;
		
	tab = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	// printf("%zu\n", malloc_size(tab));
	while (tab[i])
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	printf("string %d : %s\n", i, tab[i]);
   //printf("word = %d\n", check_word("   bonjour   je  m'appel Arthur   ", ' '));
	return (0);
}