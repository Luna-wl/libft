/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 23:21:13 by wluedara          #+#    #+#             */
/*   Updated: 2022/09/03 23:22:33 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*call;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	call = (void *)malloc(count * size);
	if (call == 0)
		return (0);
	ft_bzero(call, count * size);
	return (call);
}
