/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:12:32 by cagomez-          #+#    #+#             */
/*   Updated: 2024/10/11 20:12:38 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char *ft_itoa(int n)

int	ft_atoi(const char *str)
char *ft_itoa(int n)
{
	char	*str;

	str = malloc(n * sifeof (char))
	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

/*int main() 
{
	char str[] = "    \t2345ads";
	//int num = ft_atoi(str);
	printf("El número convertido es: %d\n", ft_atoi(str));
	printf("El número convertido es: %d\n", atoi(str));
	return (0);
}*/
