/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:11:31 by wluedara          #+#    #+#             */
/*   Updated: 2022/08/29 14:09:18 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	minus;

	num = 0;
	minus = 1;
	while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
		|| *str == '\t' || *str == '\v' || *str == '\t')
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		if (str[1] == '-' || str[1] == '+')
			minus = 0;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	num *= minus;
	return (num);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf(" 3 : %d\n", ft_atoi( "--1"));
	printf("/ 3 : %d\n", atoi("--1"));
	printf(" 4 : %d\n", ft_atoi("++1"));
	printf("/ 4 : %d\n", atoi("++1"));
	printf(" 12 : %d\n", ft_atoi("-+42"));
	printf("/ 12 : %d\n", atoi("-+42"));
	printf(" 13 : %d\n", ft_atoi("+-42"));
	printf("/ 13 : %d\n", atoi("+-42"));
}*/